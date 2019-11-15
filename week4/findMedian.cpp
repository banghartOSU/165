/********************************************** 
 * Author: Thomas Banghart
 * Date: 04/17/2019
 * Description: findMedian.cpp implementation 
 *********************************************/

#include<algorithm>
#include<iostream>
/******************************************
 * FUNCTION: findMedian()
 * Takes an array and size of the array 
 * and computes the median value. 
 ******************************************/
double findMedian(int arr[], int size){
	double median;
	//Sort the array from lowest to highest
	std::sort(arr, arr+size);
	
	//If the array is an even number of elements 
	//we'll need to compute the avergae of the two middle numbers 
	if(size % 2 == 0){
		//Set one variable "lo" to be the "left" middle element
		int lo = arr[(size/2)-1];
		//Set one variable "hi" to be the "right" middle element
		int hi = arr[(size/2)];
		//Calculate the average of lo and hi
		median = (lo + hi)/2;
	}else{
		//If the size of the array is odd, find the middle number
		median = (arr[(size/2)]);
	}
	//Return the median.
	return median;
}

// int main(){
// 	int arr[] = {10, 200, 800, 4324};
// 	int size = 4;
// 	std::cout << findMedian(arr, size) << std::endl;

// 	return 0;
// }