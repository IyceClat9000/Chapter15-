#pragma once
#include "Ship.h"
#include <iostream>
#include <string>
class CargoShip : public Ship
{
private:
	int cargoCapacity;
public:
	//constructor
	CargoShip();
	//arguement constructor
	CargoShip(string newShipName, string newYearBuilt, int newCargoCapacity);

	//setters and getters
	void setCargoCapacity(int newCargoCapacity);
	int getCargoCapacity() const;

	void print() const override;
};

