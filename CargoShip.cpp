#include "CargoShip.h"

//constructor
//Precondition: N/A
//Postcondition: Set the private capacity of cargo ship to 0
CargoShip::CargoShip()
{
	cargoCapacity = 0;
}
//arguement constructor
//Precondition: a valid new string shipName, builtYear, and Cargo Capacity
//Postcondition: Chaining constructor Set the private shipName, yearBuilt, cargo capacity to new shipName, yearBuilt, cargo capacity passed in
CargoShip::CargoShip(string newShipName, string newYearBuilt, int newCargoCapacity) : Ship(newShipName, newYearBuilt)
{
	cargoCapacity = newCargoCapacity;
}

//setters and getters
//Precondition: a valid new integer capacity
//Postcondition: Set the private capacity to new capacity passed in
void CargoShip::setCargoCapacity(int newCargoCapacity)
{
	cargoCapacity = newCargoCapacity;
}
//Precondition: N/A
//Postcondition: Return the private cargoCapacity
int CargoShip::getCargoCapacity() const
{
	return cargoCapacity;
}

//Precondition: N/A
//Postcondition: Overrided print function that works for cargoShip object
void CargoShip::print() const
{
	cout << "\n\n\tCargoShip information: ";
	cout << "\n\tShip name: " << getShipName();
	cout << "\n\tShip's cargo capacity: " << cargoCapacity << " TEU\n";
}
