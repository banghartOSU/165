/************************************************************************************* 
 * Author: Thomas Banghart
 * Date: 04/17/2019
 * Description: Header file for the Box class
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
	
	//Setters
	void setHeight(double);
	void setWidth(double);
	void setLength(double);
	
	//Implementation 
	double calcVolume();
	double calcSurfaceArea();

};
#endif