#pragma once
#ifndef MILTIME_H
#define MILTIME_H
#include "Time.h"
class MilTime : public Time
{
private:
	int milHours;
	int milSeconds;
public:
	//Default Constructor
	//Precondition: None
	//Postcondition: private members milHours and milSeconds set to 0
	MilTime()
	{
		milHours = 0;
		milSeconds = 0;
	}
	//Argument Constructor
	//Precondition: the number for mh should not have a ones and tens place over 60, ms should be below 60, mh and ms should be positive
	//Postcondition: mh and ms are set to its standard time with member variables hour, min, and sec
	MilTime(int mh, int ms)
	{
		hour = mh / 100;
		min = mh % 100;
		sec = ms;
	}
	//Setters and Getters
	//Precondition: the number for mh should not have a ones and tens place over 60, ms should be below 60, mh and ms should be positive
	//Postcondition: sets the standing time members into the time in hour, min, sec and the military time members to the military formatted numbers
	void setTime(int mh, int ms)
	{
		milHours = mh;
		milSeconds = ms;
		hour = milHours / 100;
		min = milHours % 100;
		sec = milSeconds;
		convert();
	}
	//Precondition: None
	//Postcondition: Returns the private member milHours
	int getHour()
	{
		return milHours;
	}
	//Precondition: None
	//Postcondition: Returns the time member's hour
	int getStandHr()
	{
		return hour;
	}
};

#endif
