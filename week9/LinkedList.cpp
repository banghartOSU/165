
/*****************************
 * Author: Thomas Banghart
 * Date: 05/15/2019
 * Description: This is the header file for the 
 * LinkedList class
 *****************************/

#ifndef STRINGLIST_HPP
#define STRINGLIST_HPP

#include<string>

class StringList{

private:
	struct node{
		std::string stringVal;
		node* nextNode;

		node(std::string stringVal, node* nextNode){
			this->stringVal = stringVal;
			this->nextNode = nextNode;
		}


	};
	node* head;

public:
	StringList();
	~StringList();







};















#endif