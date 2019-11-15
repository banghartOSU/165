/*************************************************
 * Author: Thomas Banghart
 * Date: 05/15/2019
 * Description: Average area takes a vector of pointers to shape objects, 
 * and calulates the average area of the shapes depending on what objects they 
 * actually are. 
 * **********************************************/

#include "Shape.hpp"
#include<vector>

double averageArea(std::vector<Shape*> shapes){
	double sumOfArea = 0.0;

	for(int i=0; i < shapes.size(); i++){
		sumOfArea += shapes[i]->area();
	}

	return sumOfArea/shapes.size();


}