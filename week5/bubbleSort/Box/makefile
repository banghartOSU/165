# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date

box: boxMain.o Box.o
	$(CXX) $(CXXFLAGS) -o box Box.o boxMain.o 

# The main.o target can be written more simply

box.o: Box.hpp 

Box.o: Box.hpp 
