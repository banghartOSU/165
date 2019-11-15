/********************************************************************************* 
 * Author: Thomas Banghart
 * Date: 04/17/2019
 * Description: Header for Person class
 *************************************************************************************/
#include<string>

#ifndef PERSON_HPP
#define PERSON_HPP


class Person{

private:
	std::string name;
	double age;

public:
	Person(std::string, double);
	Person();

	std::string getName();
	double getAge();

};

#endif