#include"ValSet.hpp"
#include<iostream>
#include<vector>



int main(){

ValSet<char> mySet;
mySet.add('A');
mySet.add('j');
mySet.add('&');

mySet.print();

mySet.remove('j');

mySet.print();

mySet.add('#');

mySet.print();

int size = mySet.size();
std::cout << size << std::endl;

ValSet<char> mySet2 = mySet;
bool check1 = mySet2.contains('&');
std::cout << check1 <<std::endl;
bool check2 = mySet2.contains('j');
std::cout << check2 << std::endl;

ValSet<char> myUnion = mySet + mySet2;
myUnion.print();
ValSet<char> myDifference = mySet/mySet2;
myDifference.print();
ValSet<char> myIntersection = mySet * mySet2;
myIntersection.print();


ValSet<int> myInt1;
myInt1.add(1);
myInt1.add(2);
myInt1.add(3);
myInt1.add(4);
myInt1.add(5);
myInt1.add(6);
myInt1.add(7);
myInt1.add(8);
myInt1.add(9);
myInt1.add(10);
myInt1.add(11);
myInt1.add(12);
myInt1.add(13);
myInt1.print();

ValSet<int> myInt2;
myInt2.add(44);
myInt2.add(7);
myInt2.add(12);
myInt2.add(13);

myInt1.print();
myInt2.print();



std::cout << "My Intersection: " <<std::endl;
ValSet<int> myIntIntersection = myInt1 * myInt2;
myIntIntersection.print();

ValSet<int> myIntDifference = myInt2/myInt1;
std::cout << "My difference: "<< std::endl; 
myIntDifference.print();




std::cout << "My Union: " <<std::endl;
ValSet<int> myIntUnion;
myIntUnion = myInt1 + myInt2;
myIntUnion.print();






// ValSet<int> v1;
// ValSet<double> v2;

// 	ValSet<int> v3(8);
// 	// ValSet<double> v4 = v3;

// 	ValSet<int> v5(25);

// 	ValSet<int> v15 = v1 + v5;

// 	v15.print();

// 	ValSet<int> v6(10);
// 	ValSet<int> v7(10);

// 	v6.print();
// 	v7.print();

// 	ValSet<int> v8 = v6*v7;

// 	v8.print();

// 	ValSet<int> v9 = v6/v7;

// 	v9.print();




	// std::cout << "V1: " << v1.size() << std::endl;
	// std::cout << "V2: " << v2.size() << std::endl;
	// std::cout << "V3: " << v3.size() << std::endl; 
	// std::cout << "V4: " << v4.size() << std::endl;

	// v2 = v3;


	// std::cout << "V1: " << v1.size() << std::endl;
	// std::cout << "V2: " << v2.size() << std::endl;
	// std::cout << "V3: " << v3.size() << std::endl; 
	// std::cout << "V4: " << v4.size() << std::endl;

	// std::cout <<"Is V4 Empty?: " << v4.isEmpty() << std::endl;
	// std::cout <<"Is V5 Empty?: " << v5.isEmpty() << std::endl;

	// v3.print();
	// v4.print();

	// v3.add(78.9);
	// v3.add(8);
	// v3.print();
	// std::cout << "Size: " << v3.size() << std::endl;
	// v3.remove(78.9);
	// std::cout << "Size: " << v3.size() << std::endl;
	// v3.remove(58);
	// v3.print();
	// std::cout << "Size: " << v3.size() << std::endl;


	// std::vector<double> v3AsVec = v3.getAsVector();
	// for(int i = 0; i < v3AsVec.size(); i++){
	// 	std::cout << v3AsVec[i] << " ";	
	// }
	// std::cout << std::endl;

	// std::vector<int> v5AsVec = v5.getAsVector();
	// for(int i = 0; i < v5AsVec.size(); i++){
	// 	std::cout << v5AsVec[i] << " ";	
	// }
	// std::cout << std::endl;

	
	// std::cout <<"Does v3 contain 3?: " <<v3.contains(3) << std::endl;
	// std::cout <<"Does v3 contain -3?: " << v3.contains(-3) << std::endl;

	return 0;
}