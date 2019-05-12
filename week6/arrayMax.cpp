/*****************************
 * Author: Thomas Banghart
 * Date: 05/05/2019
 * Description: arrayMax uses recursion to determine 
 * the largest element in an array of integers and returns that 
 * integer.
 *****************************/


#include<iostream>

int arrayMax(int arr[], int size){
	//Base case - if there's only one element in the array, return it
	if(size == 1) 
		return arr[size-1];
	//Recursive case - depending on what was larger, the first or second element,
	//we'll recurrsively compare the all elements in the array. 
	if(arrayMax(arr, size-1) > arr[size-1])
		return arrayMax(arr, size-1);

	return arr[size-1];
}



// int main(){
// 	const int SIZE = 7;

// 	int arr[] = {3, 6, -10, -100, 2000, 45000, -3000};

// 	std::cout << arrayMax(arr, SIZE) << std::endl;

// 	return 0;
// }

