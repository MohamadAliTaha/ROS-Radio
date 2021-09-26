#!/usr/bin/env python

import rospy
from std_msgs.msg import String

def send():
    rospy.init_node("sender", anonymous=True)
    publisher = rospy.Publisher("radio_message", String, queue_size=5)

    while not rospy.is_shutdown():
        message = raw_input("Enter your message: ")
        publisher.publish(message)

if __name__ == '__main__':
    try:
        send()
    except rospy.ROSInterruptException:
        pass