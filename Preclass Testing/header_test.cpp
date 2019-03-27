/***************************
 * Name: Tyler Cope
 * Date: 10/16/2016
 * Description: Class implementation file for the methods
 * getName, getScore, and the constructor listed in the header
 * file, Student.hpp. It includes Student.hpp header file.
 ***************************/
#include "header_test.hpp"
#include <iostream>
	std::string Student::getName(){
		return name;
	}
	double Student::getScore(){
		return score;
	};

	Student::Student(std::string studentName, double studentScore){
		name = studentName;
		score = studentScore;
	};

	Student::Student(){
		name = "Nothing Here";
		score = 0.0;
	}

int main(){
	Student studentA; 
	std::string name;
	double score;

	std::cout << "Please enter the student's name:" <<'\n';
	std::getline(std::cin,name); 
	std::cout << "Please enter the student's score:" <<'\n';
	std::cin >> score;

	studentA = Student(name, score);
	std::cout << studentA.getScore() << ' ' << studentA.getName() <<'\n';

	return 0;
}