#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include <sensor_msgs/msg/point_cloud2.hpp>
using std::placeholders::_1;

class L1PointCloudFilter : public rclcpp::Node
{
  public:
    L1PointCloudFilter()
    : Node("pointcloud_filter")
    {
      subscription_ = this->create_subscription<sensor_msgs::msg::PointCloud2>(
      "unilidar/cloud", 10, std::bind(&L1PointCloudFilter::topic_callback, this, _1));

      L1pub1 = this->create_publisher<sensor_msgs::msg::PointCloud2>("L1_lidar1/cloud", 10);
    }

  private:
    void topic_callback(const sensor_msgs::msg::PointCloud2& msg) const
    {
      L1pub1->publish(msg);
    }

    rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr subscription_;
    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr L1pub1;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<L1PointCloudFilter>());
  rclcpp::shutdown();
  return 0;
}
