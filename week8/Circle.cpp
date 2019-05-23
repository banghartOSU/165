/*****************************
 * Author: Thomas Banghart
 * Date: 05/22/2019
 * Description: Implementation file for 
 * the circle class with the IllegalRadius exception
 *****************************/


#include"Circle.hpp"
#include<math.h>

//Default constructor
Circle::Circle(){
	radius = 1.0;
}

//Constructor w/argument
Circle::Circle(double r){
	if(r > maxRadius)
		throw IllegalRadius(r);

	radius = r;
}

//Static data member 
void Circle::setMaxRadius(double max){
	maxRadius = max;
}

//Returns the area of the circle
double Circle::calcArea(){
	return 3.14159 * pow(radius, 2);
}
