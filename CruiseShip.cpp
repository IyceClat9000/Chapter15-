#include "CruiseShip.h"

//constructor
CruiseShip::CruiseShip()
{
	maximumPassengers = 0;
}
//arguement constructor
CruiseShip::CruiseShip(string newShipName, string newYearBuilt, int newMaximumPassenger) : Ship(newShipName, newYearBuilt)
{
	maximumPassengers = newMaximumPassenger;
}

//setters and getters
void CruiseShip::setMaximumPassengers(int newMaximumPassenger)
{
	maximumPassengers = newMaximumPassenger;
}
int CruiseShip::getMaximumPassengers() const
{
	return maximumPassengers;
}

void CruiseShip::print() const
{
	cout << "\n\n\tCruiseShip information: ";
	cout << "\n\tShip name: " << getShipName();
	cout << "\n\tShip's maximum passenger(s): " << maximumPassengers << "\n";
}