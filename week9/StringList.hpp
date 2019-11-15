
/*****************************
 * Author: Thomas Banghart
 * Date: 05/29/2019
 * Description: This is the header file for the 
 * LinkedList class
 *****************************/

#ifndef STRINGLIST_HPP
#define STRINGLIST_HPP

#include<string>
#include<vector>

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
	int size;

public:

	// //FOR TESTING
	// void print();

	//Constructors
	StringList();
	StringList(const StringList&);

	//Deconstructor
	~StringList();

	//Member functions
	void add(std::string stringToAdd);
	int positionOf(std::string stringToFind);
	bool setNodeVal(int position, std::string stringToSet);
	std::vector<std::string> getAsVector();

};

#endif