#include "CargoShip.h"

//constructor
CargoShip::CargoShip()
{
	cargoCapacity = 0;
}
//arguement constructor
CargoShip::CargoShip(string newShipName, string newYearBuilt, int newCargoCapacity) : Ship(newShipName, newYearBuilt)
{
	cargoCapacity = newCargoCapacity;
}

//setters and getters
void CargoShip::setCargoCapacity(int newCargoCapacity)
{
	cargoCapacity = newCargoCapacity;
}
int CargoShip::getCargoCapacity() const
{
	return cargoCapacity;
}

void CargoShip::print() const
{
	cout << "\n\n\tCargoShip information: ";
	cout << "\n\tShip name: " << getShipName();
	cout << "\n\tShip's cargo capacity: " << cargoCapacity << " TEU\n";
}