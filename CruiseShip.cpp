#include "CruiseShip.h"

//constructor
//Precondition: N/A
//Postcondition: Set the private maximumPassenger of Cruise ship to 0
CruiseShip::CruiseShip()
{
	maximumPassengers = 0;
}
//arguement constructor
//Precondition: a valid new string shipName, builtYear, and maximumPassenger
//Postcondition: Chaining constructor Set the private shipName, yearBuilt, maximumPassenger to new shipName, yearBuilt, maximumPassenger passed in
CruiseShip::CruiseShip(string newShipName, string newYearBuilt, int newMaximumPassenger) : Ship(newShipName, newYearBuilt)
{
	maximumPassengers = newMaximumPassenger;
}

//setters and getters
//Precondition: a valid new integer maximumPassenger
//Postcondition: Set the private maximumPassenger to new maximumPassenger passed in
void CruiseShip::setMaximumPassengers(int newMaximumPassenger)
{
	maximumPassengers = newMaximumPassenger;
}
//Precondition: N/A
//Postcondition: Return the private maximumPassenger
int CruiseShip::getMaximumPassengers() const
{
	return maximumPassengers;
}

//Precondition: N/A
//Postcondition: Overrided print function that works for cruiseship object
void CruiseShip::print() const
{
	cout << "\n\n\tCruiseShip information: ";
	cout << "\n\tShip name: " << getShipName();
	cout << "\n\tShip's maximum passenger(s): " << maximumPassengers << "\n";
}
