#include <iostream>
#include <ros/ros.h>
#include <std_msgs/String.h>

void handler(const std_msgs::StringConstPtr& msg)
{
    std::cout << msg->data << std::endl;
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "listener");
    ros::NodeHandle node_handle;

    ros::Subscriber subscriber = node_handle.subscribe("radio_message", 5, &handler);
    ros::spin();

    return 0;
}