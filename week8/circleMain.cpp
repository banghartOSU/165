/*****************************
 * Author: Thomas Banghart
 * Date: 05/22/2019
 * Description: circleMain.cpp test the Circle class
 * and its ability to catch and throw errors.
 *****************************/

#include"Circle.hpp"
#include<iostream>

double Circle::maxRadius = 10.0;

int main(){
	
	double maxInput = 0.0;

	std::cout << "Enter the maxRadius for Circles." <<std::endl;
	std::cin >> maxInput;

	Circle::setMaxRadius(maxInput);

	std::cout<< "Enter the radius for a new Circle object." << std::endl;
	
	try{
		double radius = 0.0;
		std::cin >> radius;
		Circle circle(radius);
		
		std::cout << "The Circle object was successfully created." << std::endl;
		std::cout << "The area of the circle is " 
		<< circle.calcArea() << "." << std::endl;
	}
	catch(Circle::IllegalRadius r){
		std::cout << "The Circle object could not be created." << std::endl;
		std::cout << "A radius of " << r.badRadius 
		<< " exceeds the maximum allowed radius." << std::endl;
	}

	return 0;
}