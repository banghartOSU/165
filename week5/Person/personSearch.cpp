/*****************************
 * Author: Thomas Banghart
 * Date: 04/18/2019
 * Description: 
 *****************************/

#include"Person.hpp"
#include<iostream>
#include<vector>
#include<string>

int personSearch(const std::vector<Person>& persons, std::string name){
	
	int lo = 0, 
		hi = persons.size()-1;

	while(lo <= hi){
		int mid = (lo + hi) / 2;
		if(persons[mid].getName() == name){
			return mid;
		}
		if(persons[mid].getName() < name)
			lo = mid + 1;
		
		if(persons[mid].getName() > name)
			hi = mid - 1;
	}
	return -1;
}




int main(){
	const int SIZE = 4;

	Person p0("Andre", 42);
	Person p1("Batholomew", 19);
	Person p2("Connor", 54);
	std::vector<Person> vec;
	vec.push_back(p0);
	vec.push_back(p1);
	vec.push_back(p2);

	int index = personSearch(vec, "Andre");
	
	std::cout << index << std::endl;




	return 0;
}