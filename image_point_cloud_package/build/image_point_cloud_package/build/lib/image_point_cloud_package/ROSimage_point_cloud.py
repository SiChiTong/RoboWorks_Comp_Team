#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image, CameraInfo
from cv_bridge import CvBridge, CvBridgeError
import cv2
import numpy as np
import matplotlib.pyplot as plt
import math
from roslib import message
import pyrealsense2 as rs2
from std_msgs.msg import String

# When launching the camera with ROS use the following:
# ros2 launch realsense2_camera rs_launch.py depth_module.profile:=1280x720x30 pointcloud.enable:=true align_depth.enable:=true

# The important thing here is the align_depth.enable:=true, which creates a topic which has the pointcloud points aligned with the RGB image

# GENERAL GUIDELINES AND RANGES:
# From experimenting, the depth camera can handle having an object directly in front of it at a min range of 10cm 

# HOWEVER, if the object is at the edges of the camera/pointcloud view, the minimum distance is about 15-20cm.
# Any closer and the wrong pixels get overlayed on the wrong pointcloud points.

class ImagePointCloudNode(Node):
    def __init__(self):
        super().__init__('image_point_cloud_node')

        # This just get the direct image from the camera
        self.subscription_image = self.create_subscription(
            Image,
            '/camera/color/image_raw',
            self.image_callback,
            10)
        
        # This gets the depth_frame aligned with the RGB image (pointcloud points that correspond with pixels of image)
        self.subscription_point_cloud = self.create_subscription(
            Image,
            '/camera/aligned_depth_to_color/image_raw',
            self.point_cloud_callback,
            10)
        
        # This gets information about camrea (intrinsics)
        self.subscription_cam_info = self.create_subscription(
            CameraInfo,
            '/camera/depth/camera_info',
            self.imageDepthInfoCallback,
            10)
        

        self.subscription_image  # Prevent unused variable warning
        self.subscription_point_cloud  # Prevent unused variable warning
        self.subscription_cam_info

        self.cv_bridge = CvBridge()
        self.x = 100
        self.y = 100
        self.DEBUG = True
        plt.ion()
            
        self.xPoints = []  # Initialize x as a list
        self.yPoints = []  # Initialize y as a list


        self.calculated_trajectory = False
        self.first_identify = True

        self.intrinsics = None

    
    # This gets the camrea parameters from ros topic (Needed to get x,y,z coordinates of pointcloud points)
    def imageDepthInfoCallback(self, cameraInfo):
        try:
            if self.intrinsics:
                return
            self.intrinsics = rs2.intrinsics()
            self.intrinsics.width = cameraInfo.width
            self.intrinsics.height = cameraInfo.height
            self.intrinsics.ppx = cameraInfo.k[2]
            self.intrinsics.ppy = cameraInfo.k[5]
            self.intrinsics.fx = cameraInfo.k[0]
            self.intrinsics.fy = cameraInfo.k[4]
            if cameraInfo.distortion_model == 'plumb_bob':
                self.intrinsics.model = rs2.distortion.brown_conrady
            elif cameraInfo.distortion_model == 'equidistant':
                self.intrinsics.model = rs2.distortion.kannala_brandt4
            self.intrinsics.coeffs = [i for i in cameraInfo.d]
        except CvBridgeError as e:
            print(e)
            return


    # This gets bgr image from the image topic and finds where green in the image is
    def image_callback(self, msg):        
        try:
            cv_image = self.cv_bridge.imgmsg_to_cv2(msg, desired_encoding="bgr8")

            # Perform green mask operation
            green_lower = np.array([0, 100, 0], dtype=np.uint8)
            green_upper = np.array([100, 255, 100], dtype=np.uint8)
            mask = cv2.inRange(cv_image, green_lower, green_upper)
            contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
            if contours:
                largest_contour = max(contours, key=cv2.contourArea)
                M = cv2.moments(largest_contour)
                if M["m00"] != 0:
                    self.x = int(M["m10"] / M["m00"])
                    self.y = int(M["m01"] / M["m00"])

                cv_image = cv2.circle(cv_image, (self.x,self.y), radius=3, color=(0, 0, 255), thickness=20)

            cv2.namedWindow('RealSense', cv2.WINDOW_AUTOSIZE)
            cv2.imshow('RealSense', cv_image)
            cv2.waitKey(1)

        except Exception as e:
            self.get_logger().error(f"Error in image_callback: {str(e)}")

        
    # This gets depth_frame aligned with RGB image and finds the depth and coordinates of the green point
    def point_cloud_callback(self, msg):
        try:
            if self.x is not None and self.y is not None:
                # Process point cloud and find the global coordinates at x, y
                

                # Pixel (0,0) is the top left
                # WARNING:
                # Depth is not the Euclidean distance from the camera, it is the distance along the Z-axis (axis pointing out of camera)
                # This is why depth value and z coordinate value match
                # For Eucludean distance just use formula is easy as 
                cv_image = self.cv_bridge.imgmsg_to_cv2(msg, msg.encoding)
                line = '\rDepth at pixel(%3d, %3d): %7.1f(mm).' % (self.x, self.y, cv_image[self.y, self.x])

                depth = cv_image[self.y, self.x]
                result = rs2.rs2_deproject_pixel_to_point(self.intrinsics, [int(self.x), int(self.y)], depth)
                line += '  Coordinate: %8.2f %8.2f %8.2f.' % (result[0], -result[1], result[2]) # Pos x is right side of image, pos y is bottom half of image, hence the negative sign 
                print(line)
                
                # Below is trajectory stuff, not sure if you want it with the pointcloud to use the distancing, or if it doesnt matter where it is
                '''
                centroid = [self.x, self.y]
                if centroid is not None:
                    self.xPoints.append(centroid[0])
                    self.yPoints.append(centroid[1])
                    # Draw a circle at the centroid

                    if self.first_identify:
                        self.first_identify = False
                        init_x = centroid[0]
                        init_y = centroid[1]

                    rotated_ammount = math.sqrt((centroid[0] - init_x)**2 + (centroid[1] - init_y)**2)

                    # Check if you have at least 10 different points
                    if rotated_ammount >= 50:
                        # Convert x and y to NumPy arrays before passing to fit_ellipse
                        x = np.array(self.xPoints)
                        y = np.array(self.yPoints)

                        try:

                            # Fit the ellipse and update the Matplotlib plot
                            coeffs = self.fit_ellipse(x, y)
                            #print('Exact parameters:')
                            #print('Fitted parameters:')
                            #print('a, b, c, d, e, f =', coeffs)
                            x0, y0, ap, bp, e, phi = self.cart_to_pol(coeffs)
                            #print('x0, y0, ap, bp, e, phi = ', x0, y0, ap, bp, e, phi)

                            if self.DEBUG:
                                plt.clf()  # Clear the previous plot
                                plt.plot(x, y, 'x')     # given points
                                x, y = self.get_ellipse_pts((x0, y0, ap, bp, e, phi))
                                plt.plot(x, y)
                                plt.pause(0.001)  # Add a small pause to update the plot
                        except:
                            print("unable to calculate ellipse")
                    '''

        except Exception as e:
            self.get_logger().error(f"Error in point_cloud_callback: {str(e)}")

    
    def fit_ellipse(self, x, y):
        """

        Fit the coefficients a,b,c,d,e,f, representing an ellipse described by
        the formula F(x,y) = ax^2 + bxy + cy^2 + dx + ey + f = 0 to the provided
        arrays of data points x=[x1, x2, ..., xn] and y=[y1, y2, ..., yn].

        Based on the algorithm of Halir and Flusser, "Numerically stable direct
        least squares fitting of ellipses'.


        """
        
        D1 = np.vstack([x**2, x*y, y**2]).T
        D2 = np.vstack([x, y, np.ones(len(x))]).T
        S1 = D1.T @ D1
        S2 = D1.T @ D2
        S3 = D2.T @ D2
        T = -np.linalg.inv(S3) @ S2.T
        M = S1 + S2 @ T
        C = np.array(((0, 0, 2), (0, -1, 0), (2, 0, 0)), dtype=float)
        M = np.linalg.inv(C) @ M
        eigval, eigvec = np.linalg.eig(M)
        con = 4 * eigvec[0]* eigvec[2] - eigvec[1]**2
        ak = eigvec[:, np.nonzero(con > 0)[0]]
        return np.concatenate((ak, T @ ak)).ravel()


    def cart_to_pol(self, coeffs):
        """

        Convert the cartesian conic coefficients, (a, b, c, d, e, f), to the
        ellipse parameters, where F(x, y) = ax^2 + bxy + cy^2 + dx + ey + f = 0.
        The returned parameters are x0, y0, ap, bp, e, phi, where (x0, y0) is the
        ellipse centre; (ap, bp) are the semi-major and semi-minor axes,
        respectively; e is the eccentricity; and phi is the rotation of the semi-
        major axis from the x-axis.

        """

        # We use the formulas from https://mathworld.wolfram.com/Ellipse.html
        # which assumes a cartesian form ax^2 + 2bxy + cy^2 + 2dx + 2fy + g = 0.
        # Therefore, rename and scale b, d and f appropriately.
        a = coeffs[0]
        b = coeffs[1] / 2
        c = coeffs[2]
        d = coeffs[3] / 2
        f = coeffs[4] / 2
        g = coeffs[5]

        den = b**2 - a*c
        if den > 0:
            raise ValueError('coeffs do not represent an ellipse: b^2 - 4ac must'
                            ' be negative!')

        # The location of the ellipse centre.
        x0, y0 = (c*d - b*f) / den, (a*f - b*d) / den

        num = 2 * (a*f**2 + c*d**2 + g*b**2 - 2*b*d*f - a*c*g)
        fac = np.sqrt((a - c)**2 + 4*b**2)
        # The semi-major and semi-minor axis lengths (these are not sorted).
        ap = np.sqrt(num / den / (fac - a - c))
        bp = np.sqrt(num / den / (-fac - a - c))

        # Sort the semi-major and semi-minor axis lengths but keep track of
        # the original relative magnitudes of width and height.
        width_gt_height = True
        if ap < bp:
            width_gt_height = False
            ap, bp = bp, ap

        # The eccentricity.
        r = (bp/ap)**2
        if r > 1:
            r = 1/r
        e = np.sqrt(1 - r)

        # The angle of anticlockwise rotation of the major-axis from x-axis.
        if b == 0:
            phi = 0 if a < c else np.pi/2
        else:
            phi = np.arctan((2.*b) / (a - c)) / 2
            if a > c:
                phi += np.pi/2
        if not width_gt_height:
            # Ensure that phi is the angle to rotate to the semi-major axis.
            phi += np.pi/2
        phi = phi % np.pi

        return x0, y0, ap, bp, e, phi



def main(args=None):
    rclpy.init(args=args)
    node = ImagePointCloudNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
    cv2.destroyAllWindows()

if __name__ == '__main__':
    main()


