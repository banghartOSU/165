/************************************************************************************* 
 * *** Author: Thomas Banghart
 * *** Date: 04/17/2019
 * *** Description:  Header file for the Player class. Includes function prototypes
 * ***********************************************************************************/

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include<string>

class Player{

//four data members: a string for the player's name, and an int for each of these stats: points, rebounds and assists.
private:
	std::string name;
	int points;
	int rebounds;
	int assists;

public:
	//Constructors
	Player();
	Player(std::string, int, int, int);

	//get
	std::string getName();
	int getPoints();
	int getRebounds();
	int getAssists();

	//set
	void setName(std::string);
	void setPoints(int);
	void setRebounds(int);
	void setAssists(int);

	//implementation
	bool hasMorePointsThan(Player);

};

#endif