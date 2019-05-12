/*****************************
 * Author: Thomas Banghart
 * Date: 05/03/2019
 * Description: isDecreasing uses recursion to determine 
 * if an array of integers is decreasing as the index increases.
 *****************************/

// #include<iostream>

bool isDecreasing(int arr[], int size){
	//Base case - if there's one element in the array, return true. 
	if(size == 1)
		return true;

	//if the leftmost element i smaller than the one to the right of it 
	//return false (increasing)
	if(arr[size-2] < arr[size-1])
		return false;

	//Call the function again with one less element untill we reach the first 
	//and then work through the stack.
	return isDecreasing(arr, size-1);
}


// int main(){
// 	const int SIZE = 4;

// 	int arr[] = {10, 8, 2, 1};

// 	std::cout << isDecreasing(arr, SIZE) << std::endl;

// 	return 0;
// }


