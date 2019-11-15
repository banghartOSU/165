/************************************************************************************* 
 * Author: Thomas Banghart
 * Date: 04/17/2019
 * Description: Implementation details of the Box class
 * ***********************************************************************************/

#include "Box.hpp"
//Constructors 
Box::Box(){
	height = 1.0;
	width = 1.0;
	length = 1.0;
}
Box::Box(double newHeight, double newWidth, double newLength){
	height = newHeight;
	width = newWidth;
	length = newLength;
}

//Setters
void Box::setHeight(double newHeight){
	height = newHeight;
}

void Box::setWidth(double newWidth){
	width = newWidth;
}

void Box::setLength(double newLength){
	length = newLength;
}

/******************************************************
 * FUNCTION: Box::calcVolume
 * Returns the volume of the box object that calls 
 * the function
 * ****************************************************/
double Box::calcVolume(){
	return height*width*length;
}

/******************************************************
 * FUNCTION: Box::calcVolume
 * Returns the surface area of the box object that 
 * calls the function
 * ****************************************************/
double Box::calcSurfaceArea(){
	return (2.0 * (length * width)) +
		(2.0 * (length * height)) +
		(2.0 * (height * width));
}