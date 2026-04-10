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
	MilTime()
	{
		milHours = 0;
		milSeconds = 0;
	}
	//Argument Constructor
	MilTime(int mh, int ms)
	{
		hour = mh / 100;
		min = mh % 100;
		sec = ms;
	}
	//Setters and Getters
	void setTime(int mh, int ms)
	{
		milHours = mh;
		milSeconds = ms;
		hour = milHours / 100;
		min = milHours % 100;
		sec = milSeconds;
		convert();
	}
	int getHour()
	{
		return milHours;
	}
	int getStandHr()
	{
		return hour;
	}
};

#endif