/*****************************
 * Author: Thomas Banghart
 * Date: 04/24/2019
 * Description: Takes an array of Person objects and calculates the 
 * standard deviation of their ages.
 *****************************/

#include"Person.hpp"
#include<cmath>
// #include<iostream>


double stdDev(Person arr[], int size){
	//Declare doubles for mean, sum, the deviation, and variance of the sample
	double mean = 0.0;
	double sum = 0.0;
	double sumDevSquared = 0.0;
	double variance = 0.0;

	//For loop to calculate the sum of all ages 
	for(int i = 0; i < size; i++){
		sum += arr[i].getAge();
	}
	//Get the mean
	mean = sum/size;
	
	//For loop that calculates the deviation from the mean for each element 
	
	for(int i = 0; i < size; i++){
		//Get the age 
		double age = arr[i].getAge();
		//calculate the deviation
		double deviation = age - mean;
		//sum the squared deviation 
		sumDevSquared += pow(deviation, 2);
	}
	//Divide the sum of deviation by the size of the sample 
	//We use N rather than N-1 per the assignment specifications
	variance = sumDevSquared/size;

	//Return the square root of the variance (standard deviation)
	return sqrt(variance);
}

// int main(){
// 	const double EPS = 0.00001;

// 	Person a("alice", 92);
// 	Person b("bernice", 77);
// 	Person array[] = {a,b};
// 	double result = stdDev(array, 2);


// 	std::cout << ((fabs(result-7.5) < EPS)) << std::endl;



// 	return 0;
// }