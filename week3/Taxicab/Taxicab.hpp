/********************************************************************************* 
 * Author: Thomas Banghart
 * Date: 04/17/2019
 * Description: Header file for the Taxicab class
 *************************************************************************************/
class Taxicab{

private:
	int xCoord;
	int yCoord;
	int distanceTraveled;

public:
	//Constructors 
	Taxicab();
	Taxicab(int newXCoord, int newYCoord);

	//Getters 
	int getXCoord();
	int getYCoord();
	int getDistanceTraveled();

	//Implementation
	void moveX(int);
	void moveY(int);

};