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
	//Precondition: None
	//Postcondition: Sets private members hour, min, and sec to 0
	Time()
	{ hour = 0; min = 0; sec = 0; }
	
	// Constructor
	//Precondition: h, m, and smust be positive integers, m and s should be less than 60
	//Postcondition: sets private members hour, min, and sec to h, m, and s respectively
	Time(int h, int m, int s)
	{ hour = h; min = m; sec = s; }
	
	// Accessor functions
	//Precondition: None
	//Postcondition: returns the private member hour
	int getHour() const
	{ return hour; }
	
	//Precondition: None
	//Postcondition: returns the private member min
	int getMin() const
	{ return min; }
	
	//Precondition: None
	//Postcondition: returns the private member sec
	int getSec() const
	{ return sec; }

	//Precondition: hour must be a positive integer from 1-24
	//Postcondition: Converts the hour to its standard time and at AM or PM
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

	//Precondition: The checkAM member must be defined to AM or PM
	//Postcondition: Returns a string "AM" or "PM"
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
