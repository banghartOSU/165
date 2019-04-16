/********************************************************************************* 
 * Author: Thomas Banghart
 * Date: 04/17/2019
 * Description: Implementation details for the Player class. 
 *************************************************************************************/

#include"Player.hpp"

Player::Player(){
	name = "";
	points = -100;
	rebounds = -100;
	assists = -100;
}

//Constructor that sets
Player::Player(std::string newName, int newPoints, int newRebounds, int newAssists){
	name = newName;
	points = newPoints;
	rebounds = newRebounds;
	assists = newAssists;
}

//Getters
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

//Setters
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

/*******************************************************
 * FUNCTION: Player::hasMorePointsThan
 * Returns true if the calling player has more points than
 * the Player passed as an argument and false otherwise.
 * *****************************************************/
bool Player::hasMorePointsThan(Player otherPlayer){
	return points > otherPlayer.getPoints();
}









