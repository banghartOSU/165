/*****************************
 * Author: Thomas Banghart
 * Date: 04/04/2019
 * Description: This program asks users to choose a number of integers 
 * they'd like to enter. It then determines the minimum and maximum of those
 * integers and returns their difference
 *****************************/

#include <iostream>

int main(){
	int numOfIntegers,
		input,
		max,
		min;

	//Get the total number of integers that will be entered
	std::cout << "How many integers would you like to enter?" << std::endl;
	std::cin >> numOfIntegers;

	//Prompt user to enter the integers
	std::cout << "Please enter " << numOfIntegers << " integers:" << std::endl;
	
	//Set the first number as both the minmum and maximum
	std::cin >> min;
	max = min;

	//for loop that compares the remaining integers to be entered to the min and max values
	for(int i = 1; i < numOfIntegers; i++){
		std::cin >> input;
		
		if(input <= min){
			min = input;
		}
		if(input >= max){
			max = input;
		}
	}

	std::cout << "min: "<< min << std::endl;
	std::cout <<"max: "<< max << std::endl;
	std::cout << "max-min: "<< "("<< max << ")-(" << min << ")= " << max-min;

	return 0;
}
