/*****************************
 * Author: Thomas Banghart
 * Date: 04/24/2019
 * Description: 
 *****************************/
#include"Person.hpp"

// #include<iostream>

//Constructors
Person::Person(){
	name = "John Doe";
	age = 45;

}
Person::Person(std::string newName, double newAge){
	name = newName;
	age = newAge;
}

//Get functions 
std::string Person::getName(){
	return name;
}

double Person::getAge(){
	return age;
}


// int main(){
// 	std::string name = "TJ";
// 	double age = 26;
	
// 	Person p1(name, age);

// 	std::cout << "Name: " << p1.getName() << " " << p1.getAge() << std::endl;


// 	return 0;
// }