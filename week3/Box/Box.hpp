/************************************************************************************* 
 * *** Author: Thomas Banghart
 * *** Date: 04/10/2019
 * *** Description:  Contains the implementation details of the Box class
 * ***               Uses the protoypes in the Box header file included in this class
 * ***********************************************************************************/

#ifndef BOX_HPP
#define BOX_HPP

class Box {

private:
	double height; 
	double width;
	double length;

public: 
	//Constructors 
	Box();
	Box(double, double, double);
	
	//setter functions
	void setHeight(double);
	void setWidth(double);
	void setLength(double);
	
	//implementation functions
	double calcVolume();
	double calcSurfaceArea();

};
#endif