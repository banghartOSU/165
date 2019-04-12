/********************************************************************************* 
 * Author: Thomas Banghart
 * Date: 04/11/2019
 * Description:  
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

	//getters 
	int getXCoord();
	int getYCoord();
	int getDistanceTraveled();

	//implementation
	void moveX(int);
	void moveY(int);

};