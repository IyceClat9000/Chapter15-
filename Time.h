#pragma once
// Specification file for the Time class
#ifndef TIME_H
#define TIME_H
#include <string>

class Time
{
protected:
	int hour;
	int min;
	int sec;
	enum AmPm { ERROR, AM, PM };
	AmPm checkAM;
public:
	//Default constructor
	Time()
	{ hour = 0; min = 0; sec = 0; }
	
	// Constructor
	Time(int h, int m, int s)
	{ hour = h; min = m; sec = s; }
	
	// Accessor functions
	int getHour() const
	{ return hour; }
	
	int getMin() const
	{ return min; }
	
	int getSec() const
	{ return sec; }

	void convert()
	{
		if (hour >= 12 && hour < 24)
		{
			if (hour != 12)
				hour -= 12;
			checkAM = PM;
		}
		else if (hour < 12 && hour > 0)
			checkAM = AM;
		else if (hour == 0 || hour == 24)
		{
			hour = 12;
			checkAM = AM;
		}
		else
		{
			hour = 0;
			checkAM = ERROR;
		}

	}

	string getTimeOfDay() const
	{
		if (checkAM == AM)
			return "AM";
		else if (checkAM == PM)
			return "PM";
		else
			return "unknown";
	}

};
#endif