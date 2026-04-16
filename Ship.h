#pragma once
#include <iostream>
#include <string>
using namespace std;
class Ship
{
private:
	string shipName;
	string builtYear;

public:
	//constructor
	Ship();
	//arguement constructor
	Ship(string newShipName, string newBuiltYear);

	//setters and getters
	void setShipName(string newShipName);
	string getShipName() const;

	void setBuiltYear(string newBuiltYear);
	string getBuiltYear() const;

	//virtual print function
	virtual void print() const;

	//virtual destructor (free up memory)
	virtual ~Ship();
};

