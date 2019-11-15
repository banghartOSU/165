/*************************************************
 * Author: Thomas Banghart
 * Date: 05/15/2019
 * Description: Implementation file for the Circle class
 * **********************************************/

#include"Circle.hpp"

//Default constructor sets radius to 0.0
Circle::Circle(){
	setRadius(0.0);
}

//Constructor with double argument
Circle::Circle(double r){
	setRadius(r);
}

//Set radius sets the radius of the circle 
void Circle::setRadius(double r){
	radius = r;
}

//Calculates the area of a circle
double Circle::area(){
	return (3.14159)*pow(radius,2);
}

//Calculates the perimeter of a circle
double Circle::perimeter(){
	return 2*3.14159*radius;
}
