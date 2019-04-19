/*****************************
 * Author: Thomas Banghart
 * Date: 04/18/2019
 * Description: smallSort2 that takes three int addresses and 
 * sorts their values into ascending order, so that the first parameter 
 * now has the lowest value, the second parameter the middle value, 
 * and the third parameter has the highest value. 
 *****************************/
#include<iostream>

void smallSort2(int* first, int* second, int* third){
	int temp;

	if(*first > *third){
		int temp = *third;
		*third = *first;
		*first = temp;
	}

	if(*first > *second){
		temp = *first;
		*first = *second;
		*second = temp;
	}

	if(*second > *third){
		temp = *second;
		*second = *third;
		*third = temp;
	}

}

int main(){
	int first,
		second,
		third;
	first = 14;
	second = -90;
	third = 2;

	smallSort2(&first, &second, &third);
	std::cout << first << ", " << second << ", " << third << std::endl;
}