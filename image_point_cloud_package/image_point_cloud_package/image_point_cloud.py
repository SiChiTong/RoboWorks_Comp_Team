#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image, PointCloud2
from cv_bridge import CvBridge
import cv2
import numpy as np
import matplotlib.pyplot as plt
import math

import pyrealsense2 as rs
from std_msgs.msg import String

class ImagePointCloudNode(Node):
    def __init__(self):
        super().__init__('image_point_cloud_node')
        self.subscription_image = self.create_subscription(
            Image,
            'image_topic',
            self.image_callback,
            10)
        self.subscription_point_cloud = self.create_subscription(
            String,
            'givePoint',
            self.point_cloud_callback,
            10)
        self.subscription_image  # Prevent unused variable warning
        self.subscription_point_cloud  # Prevent unused variable warning
        self.cv_bridge = CvBridge()
        self.x = 100
        self.y = 100
        self.DEBUG = True
        plt.ion()
            
        self.xPoints = []  # Initialize x as a list
        self.yPoints = []  # Initialize y as a list


        self.calculated_trajectory = False
        self.first_identify = True

        # Realsense Depth Camera Setup
        self.pipeline = rs.pipeline()
        # Configure streams
        config = rs.config()
        config.enable_stream(rs.stream.depth, 640, 480, rs.format.z16, 30)
        config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)
        # Start streaming
        self.pipeline.start(config)

        align_to = rs.stream.color
        self.align = rs.align(align_to)

        # Get stream profile and camera intrinsics
        profile = self.pipeline.get_active_profile()
        depth_profile = rs.video_stream_profile(profile.get_stream(rs.stream.depth))
        self.depth_intrinsics = depth_profile.get_intrinsics()

        color_profile = rs.video_stream_profile(profile.get_stream(rs.stream.color))
        self.color_intrinsics = color_profile.get_intrinsics()

        self.depth_to_color_extrin =  profile.get_stream(rs.stream.depth).as_video_stream_profile().get_extrinsics_to( profile.get_stream(rs.stream.color))
        self.color_to_depth_extrin =  profile.get_stream(rs.stream.color).as_video_stream_profile().get_extrinsics_to( profile.get_stream(rs.stream.depth))


    def image_callback(self, msg):
        #print("I have image")
        try:
            #print("AAAAAAAA")
            #cv_image = self.cv_bridge.imgmsg_to_cv2(msg, desired_encoding="bgr8")
            cv_image = np.asanyarray(msg.get_data())

            # Perform green mask operation
            green_lower = np.array([0, 100, 0], dtype=np.uint8)
            green_upper = np.array([100, 255, 100], dtype=np.uint8)
            mask = cv2.inRange(cv_image, green_lower, green_upper)
            contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
            if contours:
                largest_contour = max(contours, key=cv2.contourArea)
                M = cv2.moments(largest_contour)
                self.x = int(M["m10"] / M["m00"])
                self.y = int(M["m01"] / M["m00"])

                image = cv2.circle(cv_image, (self.x,self.y), radius=3, color=(0, 0, 255), thickness=20)
                cv2.namedWindow('RealSense', cv2.WINDOW_AUTOSIZE)
                cv2.imshow('RealSense', image)
                cv2.waitKey(1)

        except Exception as e:
            self.get_logger().error(f"Error in image_callback: {str(e)}")

    def point_cloud_callback(self, msg):
        try:
            if self.x is not None and self.y is not None:
                # Process point cloud and find the global coordinates at x, y



                # Implement your logic here
                # Implement your logic here

                while True:

                    # This call waits until a new coherent set of frames is available on a device
                    # Calls to get_frame_data(...) and get_frame_timestamp(...) on a device will return stable values until wait_for_frames(...) is called
                    frames = self.pipeline.wait_for_frames()

                    # Align the depth frame to color frame
                    aligned_frames = self.align.process(frames)
                    depth = aligned_frames.get_depth_frame()
                    color_frame = aligned_frames.get_color_frame()

                    depth_image = np.asanyarray(depth.get_data())
                    color_image = np.asanyarray(color_frame.get_data())

                    # Remove background - Set pixels further than clipping_distance to grey
                    grey_color = 153
                    depth_image_3d = np.dstack((depth_image,depth_image,depth_image)) #depth image is 1 channel, color is 3 channels
                    bg_removed = np.where((depth_image_3d > 5.0/0.01) | (depth_image_3d <= 0), grey_color, color_image)

                    # Render images:
                    #   depth align to color on left
                    #   depth on right
                    depth_colormap = cv2.applyColorMap(cv2.convertScaleAbs(depth_image, alpha=0.03), cv2.COLORMAP_JET)
                    images = np.hstack((bg_removed, depth_colormap))

                    cv2.namedWindow('Align Example', cv2.WINDOW_NORMAL)
                    cv2.imshow('Align Example', images)
                    key = cv2.waitKey(1)

                    # Neeed this to get image 
                    if color_frame:
                        #print("I have a color image")
                        self.image_callback(color_frame)

                    if depth:
                        # From the color image coordinates (given by opencv), convert to depth image coordinates 
                        # (See https://github.com/IntelRealSense/librealsense/issues/9945) and 
                        # (https://github.com/IntelRealSense/librealsense/issues/5603#issuecomment-574019008)
                        
                        #depth_point = rs.rs2_project_color_pixel_to_depth_pixel(depth.get_data(), 0.01, 
                        #0.01, 5.0, self.depth_intrinsics, self.color_intrinsics, 
                        #self.depth_to_color_extrin, self.color_to_depth_extrin, 
                        #[self.x, self.y])

                        #print(depth_point)
                        #x_depth_pixel, y_depth_pixel = depth_point
                        dist = depth.get_distance(int(self.x), int(self.y))
                        depth_point_final = rs.rs2_deproject_pixel_to_point(self.depth_intrinsics, [int(self.x), int(self.y)], dist)
                        print("Distance to green thing: ", dist)
                        print("Green thing is at point: ", depth_point_final[2], -depth_point_final[0], -depth_point_final[1])


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


