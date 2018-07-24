#!/bin/bash

EXECUTABLE="main.bin"

INCLUDES="\
	-I./headers"

SOURCES="\
	main.cpp \
	utils.cpp"

rm $EXECUTABLE
clear

g++ $INCLUDES $SOURCES -o $EXECUTABLE

./$EXECUTABLE