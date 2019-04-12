/************************************************************************************* 
 * *** Author: Thomas Banghart
 * *** Date: 04/10/2019
 * *** Description:  Contains the implementation details of the Box class
 * ***               Uses the protoypes in the Box header file included in this class
 * ***********************************************************************************/

#include "Box.hpp"

Box::Box(){
	height = 1;
	width = 1;
	length = 1;
}

Box::Box(double newHeight, double newWidth, double newLength){
	height = newHeight;
	width = newWidth;
	length = newLength;
}

void Box::setHeight(double newHeight){
	height = newHeight;
}

void Box::setWidth(double newWidth){
	width = newWidth;
}

void Box::setLength(double newLength){
	length = newLength;
}

double Box::calcVolume(){
	return height*width*height;
}

double Box::calcSurfaceArea(){
	return (2.0 * (length * width)) +
		(2.0 * (length * height)) +
		(2.0 * (height * width));
}