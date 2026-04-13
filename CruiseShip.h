#pragma once
#include "Ship.h"
#include <iostream>
#include <string>
using namespace std;

class CruiseShip : public Ship
{
private:
	int maximumPassengers;
public:
	//constructor
	CruiseShip();
	//arguement constructor
	CruiseShip(string newShipName, string newYearBuilt, int newMaximumPassenger);

	//setters and getters
	void setMaximumPassengers(int newMaxPass);
	int getMaximumPassengers() const;

	void print() const override;
};