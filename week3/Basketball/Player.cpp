/********************************************************************************* 
 * Author: Thomas Banghart
 * Date: 04/11/2019
 * Description:  
 *************************************************************************************/

#include"Player.hpp"


//The class should have a default constructor that initializes the name to the empty string ("") and initializes each of the stats to 
//-100 (this is not a valid value for any of the stats, and is one we should notice if it shows up where it shouldn't). 
Player::Player(){
	name = "";
	points = -100;
	rebounds = -100;
	assists = -100;
}

//It should also have a constructor that takes four parameters and uses them to initialize the data members. 
Player::Player(std::string newName, int newPoints, int newRebounds, int newAssists){
	name = newName;
	points = newPoints;
	rebounds = newRebounds;
	assists = newAssists;
}

//It should have get methods for each data member.
std::string Player::getName(){
	return name;
}
int Player::getPoints(){
	return points;
}
int Player::getRebounds(){
	return rebounds;
}
int Player::getAssists(){
	return assists;
}

//It should have set methods for each of the stats. 
void Player::setName(std::string newName){
	name = newName;
}
void Player::setPoints(int newPoints){
	points = newPoints;
}
void Player::setRebounds(int newRebounds){
	rebounds = newRebounds;
}
void Player::setAssists(int newAssists){
	assists = newAssists;
}

//implementation functions
bool Player::hasMorePointsThan(Player otherPlayer){
	return points > otherPlayer.getPoints();
}









