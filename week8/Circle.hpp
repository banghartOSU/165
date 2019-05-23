/*****************************
 * Author: Thomas Banghart
 * Date: 05/22/2019
 * Description: Header file for the Circle
 * class with IllegalRadius exception
 *****************************/


#ifndef CIRCLE_HPP
#define CIRCLE_HPP

class Circle{
private:
	static double maxRadius;
	double radius;

public: 
	//Constructors
	Circle();
	Circle(double);

	//Claculates area
	double calcArea();

	//Sets the max radius of the circle class
	static void setMaxRadius(double);


	//Inner exception class
	class IllegalRadius{
	public:
		double badRadius;
		IllegalRadius(double radius){
			badRadius = radius;
		}
	};
	
};

#endif