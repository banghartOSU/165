/*************************************************
 * Author: Thomas Banghart
 * Date: 05/15/2019
 * Description: Implementation file for the Rectangle class
 * **********************************************/


#include"Rectangle.hpp"

Rectangle::Rectangle(){
	setLength(0.0);
	setWidth(0.0);
}

Rectangle::Rectangle(double length, double width){
	setLength(length);
	setWidth(width);
}

void Rectangle::setLength(double l){
	length = l;
}

void Rectangle::setWidth(double w){
	width = w;
}

double Rectangle::area(){
	return width*length;
}

double Rectangle::perimeter(){
	return 2*(length+width);
}



