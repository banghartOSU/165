#include "MyInteger.hpp"
#include<iostream>


int main(){

MyInteger obj1(17);

//This calls the copy constructor as
//this is initalizing an object
MyInteger obj2 = obj1;

std::cout << obj1.getMyInt() << std::endl;
std::cout << obj2.getMyInt() << std::endl;

obj2.setMyInt(9);
std::cout << obj1.getMyInt() << std::endl;
std::cout << obj2.getMyInt() << std::endl;

MyInteger obj3(42);
//This uses the overloaded "=" operator as 
//both objects are already initialized
obj2 = obj3;
std::cout << obj2.getMyInt() << std::endl;
std::cout << obj3.getMyInt() << std::endl;

obj3.setMyInt(1);
std::cout << obj2.getMyInt() << std::endl;
std::cout << obj3.getMyInt() << std::endl;

	return 0; 
}