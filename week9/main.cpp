#include"StringList.hpp"
#include<iostream>

int main(){
StringList stringList1;
stringList1.add("Foo");
stringList1.add("Bar");
stringList1.add("FooBar");
stringList1.add("Another String");

stringList1.print();
std::cout << stringList1.positionOf("Foo") <<std::endl;
std::cout << stringList1.positionOf("Not in the list") <<std::endl;

std::cout << stringList1.setNodeVal(0,"String") << std::endl;
stringList1.print();

// std::vector<std::string> vec = stringList1.getAsVector();
// std::cout << "Vector: " << vec[2] << std::endl;

StringList stringList2 = stringList1;
std::cout << "String List 2: " << std::endl;
stringList2.print();

StringList sl3;
StringList sl4 = stringList1;

sl3.print();
sl4.print();






return 0;
}