/*****************************
 * Author: Thomas Banghart
 * Date: 05/22/2019
 * Description: Implementation and decleration of the ValSet 
 * tempelate class.
 *****************************/

#ifndef VALSET_HPP
#define VALSET_HPP

#include <vector>
#include <iostream>
#include <stdlib.h>

template <class T>
class ValSet {

private:
	//Data members
	T* arrayPointer;
	int sizeOfArray;
	int numOfElements;

public:
	//Default constructor
	ValSet();

	//Copy constructor
	ValSet(const ValSet&);

	//Deconstructor
	~ValSet();

	//Member functions
	int size() const;
	bool isEmpty();
	bool contains(T elementToCheck) const;
	void add(T elementToAdd);
	void remove(T elementToRemove);
	std::vector<T> getAsVector();

	//Operator overloaded functions
	ValSet<T>& operator=(const ValSet<T>& right);
	ValSet<T> operator+(const ValSet& right);
	ValSet<T> operator*(const ValSet& right);
	ValSet<T> operator/(const ValSet& right);
};

#endif

/************************************************************
 * Default constructor where arrayPointer set to reference a dynamically
 * allocated array of size 10. sizeOfArray set to 10 and numOfElements
 * set to 10.
 * **********************************************************/
template <class T>
ValSet<T>::ValSet(){
	sizeOfArray = 10;
	arrayPointer = new T[sizeOfArray];
	numOfElements = 0;
}

/************************************************************
 * Copy constructor that sets the number of elements in the new 
 * arrayPointer data member to the same size as the object to 
 * be copied. It then creates an new array with that number of elements
 * and copies over the elements to the new array.
 * **********************************************************/
template <class T>
ValSet<T>::ValSet(const ValSet& toBeCopied){
	sizeOfArray = toBeCopied.sizeOfArray;
	numOfElements = toBeCopied.size();
	arrayPointer = new T[sizeOfArray];
	
	for(int i = 0; i < numOfElements; i++){
		arrayPointer[i] = toBeCopied.arrayPointer[i];
	}
}

/************************************************************
 * Deconstructor. Deletes dynamically allocated array to avoid 
 * memory leaks.
 * **********************************************************/
template <class T>
ValSet<T>::~ValSet(){
	delete [] arrayPointer;
}

/************************************************************
 * size() returns the current size of the member array. 
 * **********************************************************/
template <class T>
int ValSet<T>::size() const {
	return numOfElements;
}

/************************************************************
 * isEmpty() checks if the the current number of elements in the 
 * member array is 0 or less. 
 * **********************************************************/
template <class T>
bool ValSet<T>::isEmpty(){
	if(this->size() <= 0)
		return true;
	return false;
}

/************************************************************
 * contains() takes a parameter of type T and returns true if 
 * that value is in the ValSet, and returns false otherwise 
 * **********************************************************/
template <class T>
bool ValSet<T>::contains(T elementToCheck) const{
	for (int i = 0; i < this->size(); i++){
		if(arrayPointer[i] == elementToCheck)
			return true;
	}
	return false;
}

/************************************************************
 * add() takes a parameter of type T and adds that value to the ValSet 
 * (if that value is not already in the ValSet)
 * **********************************************************/
template <class T>
void ValSet<T>::add(T elementToAdd){
	if(!this->contains(elementToAdd)){
		
		if(this->size() == sizeOfArray){
			T* temp = new T[sizeOfArray*2];
			sizeOfArray *= 2;
			for (int i = 0; i < this->size(); i++)
			 	temp[i] = arrayPointer[i];
			delete [] arrayPointer;
			arrayPointer = temp;
			numOfElements += 1;
			arrayPointer[numOfElements-1] = elementToAdd;
		}else{
		numOfElements += 1;
		arrayPointer[numOfElements-1] = elementToAdd;
		}
	}
}
/************************************************************
 * remove() takes a parameter of type T and removes it from the ValSet 
 * (if that value is in the ValSet)
 * **********************************************************/
template <class T>
void ValSet<T>::remove(T elementToRemove){
	if(this->contains(elementToRemove) && !this->isEmpty()){
		int position = 0;
		for (int i = 0; i < this->size(); i++){
			if(arrayPointer[i] == elementToRemove)
				position = i;
		}
		for (int i = position; i < this->size()-1; i++)
			arrayPointer[i] = arrayPointer[i+1];
		numOfElements -= 1;
	}
}
/************************************************************
 * getAsVector() method should return a vector (of type T) that 
 * contains all of the values in the ValSet and only those values. 
 * **********************************************************/
template <class T>
std::vector<T> ValSet<T>::getAsVector(){
	std::vector<T> arrayAsVector;
	for (int i = 0; i < this->size(); i++)
		arrayAsVector.push_back(arrayPointer[i]);
	return arrayAsVector;
}
/************************************************************
 * An overloaded assignment operator that initializes the pointer 
 * data member to point to an array of the same size as the one being copied, 
 * copies over the array values, copies the values for the size of the array 
 * and the number of values in the set, and returns a reference to the object 
 * pointed to by the this pointer
 * **********************************************************/
template <class T>
ValSet<T>& ValSet<T>::operator=(const ValSet<T>& right){
	if(this != &right){
		sizeOfArray = right.size();
		numOfElements = sizeOfArray;
		arrayPointer = new T[numOfElements];
	
		for(int i = 0; i < numOfElements; i++){
			arrayPointer[i] = right.arrayPointer[i];
		}
	}
	return *this;
}

/************************************************************
 * overloaded + operator that returns a new ValSet that is 
 * the union of its two operands (contains all and only those values 
 * that were in either ValSet)
 * **********************************************************/
template <class T>
ValSet<T> ValSet<T>::operator+(const ValSet<T>& right){
	ValSet<T> valSetToReturn;
	for(int i = 0; i < right.size(); i++)
		valSetToReturn.add(right.arrayPointer[i]);
	for (int i = 0; i <this->size(); ++i)
		valSetToReturn.add(arrayPointer[i]);
	return valSetToReturn;
}

/************************************************************
 * overloaded * operator that returns a new ValSet that is 
 * the intersection of its two operands (contains all and only 
 * those values that were in both ValSets)
 * **********************************************************/
template <class T>
ValSet<T> ValSet<T>::operator*(const ValSet<T>& right){
	ValSet<T> valSetToReturn;

	for (int i = 0; i < right.size(); i++){
			if(this->contains(right.arrayPointer[i])){
				valSetToReturn.add(right.arrayPointer[i]);
			}
		}
	return valSetToReturn;
}

/************************************************************
* overloaded / operator that returns a new ValSet that is the 
* symmetric difference of its two operands (contains all and 
* only those values that were in one ValSet or the other, 
* but not both)
 * **********************************************************/
template <class T>
ValSet<T> ValSet<T>::operator/(const ValSet<T>& right){
	ValSet<T> valSetToReturn;	
	for (int i = 0; i < this->size(); i++){
		if(!(right.contains(arrayPointer[i])))
			valSetToReturn.add(arrayPointer[i]);
	}
	
	for (int i = 0; i < right.size(); i++){
		if(!(this->contains(right.arrayPointer[i])))
			valSetToReturn.add(right.arrayPointer[i]);
	}
return valSetToReturn;
}

















