/*****************************
 * Author: Thomas Banghart
 * Date: 04/04/2019
 * Description: This program determines the distance an object falls 
 * given a specific period of time:
 *****************************/

#include <cmath>
// #include<iostream>

double fallDistance(double);

// int main(){
// 	const double TESTING_VAR = 3.2;
	
// 	std::cout<<fallDistance(TESTING_VAR) << std::endl;

// 	return 0;
// }

/*****************************
* fallDistnace takes the falling time as an argument returns the 
* distance in meters that the object has fallen in that time. 
 *****************************/

double fallDistance(double time){
	double distance;

	distance = (0.5)*(9.8)*(pow(time,2));
	
	return distance;

}