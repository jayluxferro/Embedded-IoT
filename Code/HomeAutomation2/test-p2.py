"""
Author: Jay
Task:   Send commands to arduino using pyserial

Install pyserial:
    pip install pyserial
"""
import serial
from time import sleep

# defs
com_port = "/dev/cu.usbmodem14101"

serial_com = serial.Serial(com_port, 9600)

while True:
    user_input = str(input("Enter 1 or 0 to turn the device on and off respectively: "))
    serial_com.write(user_input)
