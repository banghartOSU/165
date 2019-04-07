/*****************************
 * Author: Thomas Banghart
 * Date: 04/10/2019
 * Description: smallSort that takes three int parameters by reference and 
 * sorts their values into descending order, so that the first parameter 
 * now has the highest value, the second parameter the middle value, 
 * and the third parameter has the lowest value. 
 *****************************/

#include<iostream>

void smallSort(int &first, int &second, int &third);

int main(){
	int first,
		second,
		third;
	
	first = 1;
	second = 200;
	third = 2;

	smallSort(first, second, third);
	std::cout << "First: " << first << std::endl;
	std::cout << "Second: " << second << std::endl;
	std::cout << "Third: " << third << std::endl;

	return 0;
}

void smallSort(int &first, int &second, int &third){
	int temp;

	if(first < third){
		temp = third;
		third = first;
		first = temp;
	}

	if(first < second){
		temp = first;
		first = second;
		second = temp;
	}

	if(second < third){
		temp = second;
		second = third;
		third = temp;
	}

}