/*****************************
 * Author: Thomas Banghart
 * Date: 04/24/2019
 * Description: Implementation file for the Person class
 *****************************/
#include"Person.hpp"
#include<string>

// #include<iostream>

//Constructors
Person::Person(){
	name = "";
	age = 0.0;

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