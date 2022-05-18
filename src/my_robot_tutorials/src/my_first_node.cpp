#include <ros/ros.h>

int main (int argc, char **argv){

    ros::init(argc, argv, "my_first_cpp_node");
    ros::NodeHandle nh;

    ROS_INFO("Node has been started");

    ros::Rate rate(10);     // Set the periodicity to 10Hz

    while (ros::ok()) {     // while the not is not shutdown
        ROS_INFO("Hello");
        rate.sleep();       // Wait the rest of the period corresponding of the 10Hz frequency
    }

}