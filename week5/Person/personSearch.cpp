/*****************************
 * Author: Thomas Banghart
 * Date: 04/28/2019
 * Description: personSearch takes a sorted vector of Person objects and a name and uses a binary search 
 * to return the index of the Person object with that same name. 
 * If no match is found, it returns -1.
 *****************************/

#include"Person.hpp"
#include<iostream>
#include<vector>
#include<string>

int personSearch(const std::vector<Person>& persons, std::string name){
	//Establish the starting index (lo), the last index (hi) and declare a mid int 
    int lo = 0;
    int hi = persons.size() - 1;
    int mid;
   
   	//Set default index to -1 in case no match is found and have a bool in case this 
   	//function is used in another conditional statement
    int index = -1;
    bool found = false;
    
   	//While the lower index does not "cross" the high index, keep searching
    while (!found && lo <= hi)
    {
    	//Standard binary search algorithim
        mid = (lo + hi) / 2;
        
        if (persons[mid].getName() == name) {
            found = true;
            index = mid;
        
        } else if (persons[mid].getName() > name) {
            hi = mid - 1;
    
        } else {
            lo = mid + 1;   
        }
    }
    return index;
}

// int main(){
// 	const int SIZE = 4;

// 	Person p0("Andre", 42);
// 	Person p1("Batholomew", 19);
// 	Person p2("Connor", 54);
// 	std::vector<Person> vec;
// 	vec.push_back(p0);
// 	vec.push_back(p1);
// 	vec.push_back(p2);

// 	int index = personSearch(vec, "Connor");
	
// 	std::cout << index << std::endl;

// 	return 0;
// }