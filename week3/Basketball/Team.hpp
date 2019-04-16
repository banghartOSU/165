/************************************************************************************* 
 * *** Author: Thomas Banghart
 * *** Date: 04/17/2019
 * *** Description:  Header file for the Team class. Includes function prototypes.
 * ***********************************************************************************/

#ifndef TEAM_HPP
#define TEAM_HPP

#include"Player.hpp"

class Team{

private:
	Player pointGuard;
	Player shootingGuard;
	Player smallForward;
	Player powerForward;
	Player center;

public:
	//constructor
	Team(Player, Player, Player, Player, Player);
	Team();

	//getters
	Player getPointGuard();
	Player getShootingGuard();
	Player getSmallForward();
	Player getPowerForward();
	Player getCenter();

	//setters
	void setPointGuard(Player);
	void setShootingGuard(Player);
	void setSmallForward(Player);
	void setPowerForward(Player);
	void setCenter(Player);

	//implementation
	int totalPoints();
};

#endif