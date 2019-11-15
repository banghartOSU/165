#include"Circle.hpp"
#include"Rectangle.hpp"
#include"Square.hpp"
#include"averageArea.cpp"
#include<vector>
#include<iostream>


int main(){

	Rectangle r1(3.6,6.8);
	Square s1(4.1);
	Circle c1(4.1);

	std::vector<Shape*> shapes;

	shapes.push_back(&r1);
	shapes.push_back(&s1);
	shapes.push_back(&c1);

	std::cout << "Rectangle: " << r1.area() << std::endl;
	std::cout << "Square: " << s1.area() << std::endl;
	std::cout << "Circle: " << c1.area() << std::endl;

	std::cout << averageArea(shapes) << std::endl;

	return 0;
}