/*****************************
 * Author: Thomas Banghart
 * Date: 05/03/2019
 * Description: summer recursively adds the values of a double array. 
 *****************************/

// #include<iostream>

double summer(double arr[], int size){
	double sum = 0.0;
	
	if(size > 0)
		sum = arr[size-1] + summer(arr, size-1);

	return sum;

}



// int main(){
// 	const int SIZE = 3;
// 	double arr[] = {1.0, 1.0, 1.0, 1.0, -1.0};

// 	std::cout << summer(arr, SIZE) << std::endl;

// 	return 0;
// }
