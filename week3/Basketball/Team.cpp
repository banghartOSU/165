// Next write a class called Team that has five data members of type Player: a point guard, a shooting guard, a small forward, a power forward, and a center.  
// The class should have a constructor that takes five Players and uses them to initialize each of those data members (in the given order).  
// The class should have get and set methods for each data member.  
// It should have a method named totalPoints that returns the sum of the points for all players on the team.

#include"Team.hpp"
//constructor
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

int Team::totalPoints(){
    int pgPoints = pointGuard.getPoints();
    int sgPoints = shootingGuard.getPoints();
    int sfPoints = smallForward.getPoints();
    int pfPoints = powerForward.getPoints();
    int cPoints = center.getPoints();
    
    // Return the sum of all of those points
    return pgPoints + sgPoints + sfPoints + pfPoints + cPoints;
}












