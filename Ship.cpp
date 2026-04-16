#include "Ship.h"

//Precondition: N/A
//Postcondition: Set the private shipName and builtYear to unknown
Ship::Ship()
{
	shipName = "unknown";
	builtYear = "unknown";
}

//Precondition: a valid new string shipName and builtYear
//Postcondition: Set the private shipName and builtYear to new shipName and Year passed in
Ship::Ship(string newShipName, string newBuiltYear)
{
	setShipName(newShipName);
	setBuiltYear(newBuiltYear);
}

//Precondition: a valid new string shipName
//Postcondition: Set the private shipName to new shipName passed in
void Ship::setShipName(string newShipName)
{
	shipName = newShipName;
}
//Precondition: N/A
//Postcondition: Return the private shipName as string
string Ship::getShipName() const
{
	return shipName;
}

//Precondition: a valid new string builtYear
//Postcondition: Set the private builtYear to new builtYear passed in
void Ship::setBuiltYear(string newBuiltYear)
{
	builtYear = newBuiltYear;
}
//Precondition: N/A
//Postcondition: Return the private builtYear to new builtYear passed in
string Ship::getBuiltYear() const
{
	return builtYear;
}

//Precondition: N/A
//Postcondition: A print format for ship's informations
void Ship::print() const
{
	cout << "\n\tShip information: ";
	cout << "\n\tShip name: " << shipName;
	cout << "\n\tShip built in: " << builtYear;
}
