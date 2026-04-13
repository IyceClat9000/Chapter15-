//Thanh Phan
//04-12-2026
//Chapter 15 - Assignment, Team members: Angelo, Andy, Aleeza, Luis, Sven, Thanh

#include <iostream>
#include <iomanip>
#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"
using namespace std;

//function prototype
void Challenge12();

int main()
{
	//Challenge12
	Challenge12();

	return EXIT_SUCCESS;
}

void Challenge12()
{
	//create new ship array, the book says so
	const int SHIPNUMBER = 3;
	Ship* arrayOfShips[SHIPNUMBER] = { new Ship("Nautica", "1999"), new CruiseShip("Titanic", "1911", 2435), new CargoShip("HMM Algeciras", "2020", 23820)};

	//display using print function (dynamic binding testing)
	for (int i = 0; i < SHIPNUMBER; i++)
	{
		arrayOfShips[i]->print();
	}
}