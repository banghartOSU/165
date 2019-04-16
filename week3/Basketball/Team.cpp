/************************************************************************************* 
 * Author: Thomas Banghart
 * Date: 04/10/2019
 * Description:  Contains the implementation details of the Team class. 
 * ***********************************************************************************/

#include"Team.hpp"
//Constructors

//Default constructor which creates new Player objects for each position
Team::Team(){
	pointGuard = Player();
	shootingGuard = Player();
	smallForward = Player();
	powerForward = Player();
	center = Player();
}

Team::Team(Player pG, Player sG, Player sF, Player pF, Player c){
	pointGuard = pG;
	shootingGuard = sG;
	smallForward = sF;
	powerForward = pF;
	center = c;
}

//getters
Player Team::getPointGuard(){
	return pointGuard;
}
Player Team::getShootingGuard(){
	return shootingGuard;
}
Player Team::getSmallForward(){
	return smallForward;
}
Player Team::getPowerForward(){
	return powerForward;
}
Player Team::getCenter(){
	return center;
}

//setters
void Team::setPointGuard(Player pG){
	pointGuard = pG;
}
void Team::setShootingGuard(Player sG){
	shootingGuard = sG;
}
void Team::setPowerForward(Player pF){
	powerForward = pF;
}
void Team::setCenter(Player c){
	center = c;
}

/*******************************************************
 * FUNCTION: Team::totalPoints
 * Sums the number of points for each player on a team. 
 * *****************************************************/
int Team::totalPoints(){
	//Get each players points 
    int pgPoints = pointGuard.getPoints();
    int sgPoints = shootingGuard.getPoints();
    int sfPoints = smallForward.getPoints();
    int pfPoints = powerForward.getPoints();
    int cPoints = center.getPoints();
    
    // Return the sum of all of those points
    return pgPoints + sgPoints + sfPoints + pfPoints + cPoints;
}












