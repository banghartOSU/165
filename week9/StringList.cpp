
/*****************************
 * Author: Thomas Banghart
 * Date: 05/29/2019
 * Description: This is the implementation file for the 
 * LinkedList class
 *****************************/

#include"StringList.hpp"
#include<vector>

#include<iostream>
// FOR TESTING 
// void StringList::print(){
// 	if(head == nullptr){
// 		std::cout << "Empty List" << std::endl;
// 	}else{
// 		node *currentNode = head;
// 		while(currentNode != nullptr){
// 			std::cout << currentNode->stringVal << std::endl;
// 			currentNode = currentNode->nextNode;
// 		}
// 	}
// }

//Default constructor
StringList::StringList(){
	head = nullptr;
	size = 0;
}
//Copy constructor
StringList::StringList(const StringList& right){
		//If no nodes in list, nothing to copy
		if(right.head == nullptr){
			head = nullptr;
			size = 0;
		}else{
		//Copy contents of first node
		this->head = new node(right.head->stringVal, nullptr);
		this->size = 0;
		//Iterate through the remaining nodes
		node *currentNode = right.head->nextNode;
		while(currentNode != nullptr){
			this->add(currentNode->stringVal);
			currentNode = currentNode->nextNode;	
		}
	}
}

//Deconstructor
StringList::~StringList(){
	node *currentNode = head;
	while(currentNode != nullptr){
		node *garbage = currentNode;
		currentNode = currentNode->nextNode;
		delete garbage;
	}
}
/************************************************************
 * add(): adds a new node containing the value of the parameter 
 * to the end of the list. 
 * **********************************************************/
void StringList::add(std::string stringToAdd){
	if(head == nullptr){
		head = new node(stringToAdd, nullptr);

	}else{
		node *currentNode = head;
		while(currentNode->nextNode != nullptr){
			currentNode = currentNode->nextNode;
		}
		currentNode->nextNode = new node(stringToAdd, nullptr);
	}
	size += 1;
}
/************************************************************
 * positionOf() returns the (zero-based) position in the list 
 * for the first occurrence of the parameter in the list, or -1 
 * if that value is not in the list. 
 * **********************************************************/
int StringList::positionOf(std::string stringToFind){
	int position = 0;
	node *currentNode = head;
	while(currentNode != nullptr){
		if(stringToFind == currentNode->stringVal){
			return position;
		}else{
			position++;
			currentNode = currentNode->nextNode;
		}
	}
	return -1;
}
/************************************************************
 * setNodeVal() sets the value of the node at that position to 
 * the value of the string parameter.  If the position parameter 
 * is >= the number of nodes in the list, the operation cannot be carried 
 * out and setNodeVal() should return false, otherwise it should be 
 * successful and return true.  
 * **********************************************************/
bool StringList::setNodeVal(int position, std::string stringToSet){
	if(position >= this->size){
		return false;
	}else{
		int currentPostion = 0;
		node* currentNode = head;
		while(currentPostion != position){
			currentNode = currentNode->nextNode;
			currentPostion++;
		}
		currentNode->stringVal = stringToSet;
	}
	return true;
}
/************************************************************
 * getAsVector() returns a vector with the same size, values 
 * and order as the StringList.
 * **********************************************************/
std::vector<std::string> StringList::getAsVector(){
	std::vector<std::string> vectorToReturn;
	node *currentNode = head;
	while(currentNode != nullptr){
		vectorToReturn.push_back(currentNode->stringVal);
		currentNode = currentNode->nextNode;
	}
	return vectorToReturn;
}

