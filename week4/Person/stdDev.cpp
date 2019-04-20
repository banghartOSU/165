/*****************************
 * Author: Thomas Banghart
 * Date: 04/24/2019
 * Description: 
 *****************************/


#include"Person.hpp"
#include<iostream>
#include<cmath>

double stdDev(Person arr[], int size){
	//Declare doubles for mean, sum, the deviation, and variance of the sample
	double mean,
		   sum,
		   sumDevSquared,
		   variance;

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

int main(){
	Person p1("TJ", 26);
	Person p2("Olivia", 24);
	Person p3("Rose", 1000);

	Person people[3] = {p1, p2, p3};

	std::cout << people[0].getName() << std::endl;
	std::cout << people[1].getName() << std::endl;
	std::cout << people[2].getName() << std::endl;

	std::cout << "Standard deviation: " << stdDev(people, 3) << std::endl;

	return 0;
}