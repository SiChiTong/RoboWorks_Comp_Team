# Example:
#   $ ros2 launch velodyne_driver velodyne_driver_node-VLP16-launch.py
#   $ ros2 launch velodyne_pointcloud velodyne_transform_node-VLP16-launch.py
#
#   SLAM:
#   $ ros2 launch rtabmap_examples vlp16.launch.py


from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch.conditions import IfCondition, UnlessCondition
from launch_ros.actions import Node

def generate_launch_description():

    use_sim_time = LaunchConfiguration('use_sim_time')
    deskewing = LaunchConfiguration('deskewing')
    localization = LaunchConfiguration('localization')
    
    return LaunchDescription([

        # Launch arguments
        DeclareLaunchArgument(
            'use_sim_time', default_value='false',
            description='Use simulation (Gazebo) clock if true'),
        
        DeclareLaunchArgument(
            'deskewing', default_value='true',
            description='Enable lidar deskewing'),

        ################### Use localisation after creating a a map with SLAM ##########################################
        ################### USING SLAM IS SET TO DELETE THE PREVIOUS DATABASE ATM ###############################################
        DeclareLaunchArgument(
            'localization', default_value='false',
            description='Launch in localization mode.'),
          
        # Nodes to launch
        Node(
            package='rtabmap_odom', executable='icp_odometry', output='screen',
            parameters=[{
              'frame_id':'unilidar_lidar',
              'odom_frame_id':'odom',
              'wait_for_transform':0.2,
              'expected_update_rate':15.0,
              'deskewing':deskewing,
              'use_sim_time':use_sim_time,
              'wait_imu_to_init':True,
              'map_always_update':True,
              'queue_size':100,        # Increasing the queue size may help with performance?
            }],
            remappings=[
              ('scan_cloud', '/unilidar/cloud'),
              ('imu', '/imu/data'),

            ],
            arguments=[
              'Icp/PointToPlane', 'true',
              'Icp/Iterations', '10',
              'Icp/VoxelSize', '0.1',
              'Icp/Epsilon', '0.001',
              'Icp/PointToPlaneK', '20',
              'Icp/PointToPlaneRadius', '0',
              'Icp/MaxTranslation', '0.5',
              'Icp/MaxCorrespondenceDistance', '0.2', # Changing this helps with the LIDAR jtters 
              'Icp/Strategy', '1',
              'Icp/OutlierRatio', '0.7',
              'Icp/CorrespondenceRatio', '0.1',
              'Odom/ScanKeyFrameThr', '0.4',
              'Odom/Strategy', '0', 
              'OdomF2M/ScanSubtractAngle', '45'
              'OdomF2M/ScanSubtractRadius', '0.1',
              'OdomF2M/ScanMaxSize', '15000',
              'OdomF2M/BundleAdjustment', 'false',
              'Rtabmap/DetectionRate', '100.0',   # This is how fast the map is updated apparently? (Orginally was 1) but be hampered by a process before 
              #'Reg/Strategy', '1',
            ]),

        Node(
            package='rtabmap_util', executable='point_cloud_assembler', output='screen',
            parameters=[{
              'max_clouds':10,
              'fixed_frame_id':'',
              'use_sim_time':use_sim_time,
            }],
            remappings=[
              ('cloud', 'odom_filtered_input_scan')
            ]),
        

        # SLAM Node
        Node(
            condition=UnlessCondition(localization),
            package='rtabmap_slam', executable='rtabmap', output='screen',
            parameters=[{
              'frame_id':'unilidar_lidar',
              'subscribe_depth':False,
              'subscribe_rgb':False,
              'subscribe_scan_cloud':True,
              'subscribe_scan':False,
              'approx_sync':False,
              'wait_for_transform':0.2,
              'use_sim_time':use_sim_time,
              'map_always_update':True,
              'queue_size':100,
            }],
            remappings=[
              ('scan_cloud', 'assembled_cloud'),
              ('imu', '/imu/data'),
            ],
            arguments=[
              '-d', # This will delete the previous database (~/.ros/rtabmap.db)!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
              'RGBD/ProximityMaxGraphDepth', '0',
              'RGBD/ProximityPathMaxNeighbors', '1',
              'RGBD/AngularUpdate', '0.05',
              'RGBD/LinearUpdate', '0.05',
              'RGBD/CreateOccupancyGrid', 'true',  # Use this to create and save a 2D map within RTAB, not just the /map topic
              'Mem/NotLinkedNodesKept', 'false',
              'Mem/STMSize', '30',
              'Mem/LaserScanNormalK', '20',
              'Reg/Strategy', '1',
              'Icp/VoxelSize', '0.1',
              'Icp/PointToPlaneK', '20',
              'Icp/PointToPlaneRadius', '0',
              'Icp/PointToPlane', 'true',
              'Icp/Iterations', '10',
              'Icp/Epsilon', '0.001',
              'Icp/MaxTranslation', '0.02',
              'Icp/MaxCorrespondenceDistance', '3',
              'Icp/Strategy', '0',
              'Icp/OutlierRatio', '0.7',
              'Icp/CorrespondenceRatio', '0.2',

              # Everything below is different from velodyne example, Grid definates the 2D map properties and how the pointcloud gets mapped to it
              #'Reg/Strategy','1',
              'Reg/Force3DoF','true',
              'Grid/3D', 'false',
              'Grid/RayTracing', 'true',
              #'use_action_for_goal', 'true',
              #'RGBD/NeighborLinkRefining','true',
              #'Grid/Sensor', '0',
              'Grid/NormalsSegmentation', 'false',
              #'Grid/FromDepth', 'false',
              'Grid/RangeMax', '2.0',
              'Grid/MaxObstacleHeight', '1.0',
              'Grid/MaxGroundHeight', '0.0',
              'Rtabmap/DetectionRate', '100.0',
              'Grid/CellSize', '0.1',
              'Grid/DepthDecimation', '1',
              #'GridGlobal/Eroded', 'true',
              #'Grid/MapFrameProjection', 'true'
              #'qos_scan', '2',
            ]), 


        # Localization mode:
        Node(
            condition=IfCondition(localization),
            package='rtabmap_slam', executable='rtabmap', output='screen',
            parameters=[{
              'frame_id':'unilidar_lidar',
              'subscribe_depth':False,
              'subscribe_rgb':False,
              'subscribe_scan_cloud':True,
              'subscribe_scan':False,
              'approx_sync':True,
              'wait_for_transform':0.2,
              'use_sim_time':use_sim_time,
              'RGBD/NeighborLinkRefining':'True',
              'map_always_update':True,
              'use_action_for_goal':True,
              'queue_size':100,
              'Odom/ResetCountdown':1,
              'RGBD/OptimizeFromGraphEnd':'True',
              'Reg/Strategy':'0',
              
              'RGBD/ProximityMaxGraphDepth': '0',
              'RGBD/ProximityPathMaxNeighbors': '1',
              'RGBD/AngularUpdate': '0.05',
              'RGBD/LinearUpdate': '0.05',
              'RGBD/CreateOccupancyGrid': 'true',  # Use this to create and save a 2D map within RTAB, not just the /map topic
              'Mem/NotLinkedNodesKept': 'false',
              'Mem/STMSize': '30',
              'Mem/LaserScanNormalK': '20',
              'Reg/Strategy': '1',
              'Icp/VoxelSize': '0.1',
              'Icp/PointToPlaneK': '20',
              'Icp/PointToPlaneRadius': '0',
              'Icp/PointToPlane': 'true',
              'Icp/Iterations': '10',
              'Icp/Epsilon': '0.001',
              'Icp/MaxTranslation': '0.02',
              'Icp/MaxCorrespondenceDistance': '3',
              'Icp/Strategy': '0',
              'Icp/OutlierRatio': '0.7',
              'Icp/CorrespondenceRatio': '0.2',

              # Everything below is different from velodyne example, Grid definates the 2D map properties and how the pointcloud gets mapped to it
              #'Reg/Strategy','1',
              'Reg/Force3DoF':'true',
              'Grid/3D': 'false',
              'Grid/RayTracing': 'true',
              #'use_action_for_goal', 'true',
              #'RGBD/NeighborLinkRefining','true',
              #'Grid/Sensor', '0',
              'Grid/NormalsSegmentation': 'false',
              #'Grid/FromDepth', 'false',
              'Grid/RangeMax': '2.0',
              'Grid/MaxObstacleHeight': '1.0',
              'Grid/MaxGroundHeight': '0.0',
              'Rtabmap/DetectionRate': '100.0',
              'Grid/CellSize': '0.1',
              'Grid/DepthDecimation': '1',
              'Rtabmap/StartNewMapOnLoopClosure': 'true',

              },
              {'Mem/IncrementalMemory':'False',
               'Mem/InitWMWithAllNodes':'True'}],
            remappings=[
              ('scan_cloud', 'assembled_cloud'),
              ('imu', '/imu/data'),
            ]),


        # Visualise RTAB stuff idk tbh idgaf (I do but it scares me)
        Node(
            package='rtabmap_viz', executable='rtabmap_viz', output='screen',
            parameters=[{
              'frame_id':'unilidar_lidar',
              'odom_frame_id':'odom',
              'subscribe_odom_info':True,
              'subscribe_scan_cloud':True,
              'subscribe_scan':False,
              'approx_sync':False,
              'use_sim_time':use_sim_time,
              'map_always_update':True,
              'queue_size':100,
            }],
            remappings=[
               ('scan_cloud', 'odom_filtered_input_scan'),
            ]),
        
        # IMU defining stuff
        # Compute quaternion of the IMU
        Node(
            package='imu_filter_madgwick', executable='imu_filter_madgwick_node', output='screen',
            parameters=[{'use_mag': False, 
                         'world_frame':'enu', 
                         'publish_tf':False}],
            remappings=[('imu/data_raw', '/unilidar/imu')]),

        Node(
          package='tf2_ros', executable='static_transform_publisher', output='screen',
          arguments=['-0.007698', '-0.014655', '0.00667', '0', '0', '0', 'unilidar_lidar', 'unilidar_imu']),
    ])
    
    
