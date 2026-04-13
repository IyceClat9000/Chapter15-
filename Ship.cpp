#include "Ship.h"


//Precondition: 
//Postcondition: 
Ship::Ship()
{
	shipName = "unknown";
	builtYear = "unknown";
}

//Precondition: 
//Postcondition: 
Ship::Ship(string newShipName, string newBuiltYear)
{
	setShipName(newShipName);
	setBuiltYear(newBuiltYear);
}

void Ship::setShipName(string newShipName)
{
	shipName = newShipName;
}
string Ship::getShipName() const
{
	return shipName;
}

void Ship::setBuiltYear(string newBuiltYear)
{
	builtYear = newBuiltYear;
}
string Ship::getBuiltYear() const
{
	return builtYear;
}

void Ship::print() const
{
	cout << "\n\tShip information: ";
	cout << "\n\tShip name: " << shipName;
	cout << "\n\tShip built in: " << builtYear;
}