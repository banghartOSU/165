/*****************************
 * Author: Thomas Banghart
 * Date: 04/02/2019
 * Description: This program asks users for a temperature in Fahrenheit
 * and converts it to Celsius.
 *****************************/

#include<iostream>

int main(){
	double tempIn,
		   tempOut;
	std::cout << "Please enter a Fahrenheit temperature." <<std::endl;
	std::cin >> tempIn;

	tempOut = (5.0/9.0)*(tempIn - 32);

	std::cout << "The equivalent Celsius temperature is:" << std::endl;
	std::cout << tempOut << std::endl;

	return 0;
}