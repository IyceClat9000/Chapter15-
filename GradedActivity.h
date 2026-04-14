#pragma once
#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

class GradedActivity
{
private:
	double score; // to hold the numeric score
public:
	//default constructor
	GradedActivity()
	{score = 0.0;}
	//constructor
	GradedActivity(double s)
	{score = s;}
	//mutator function
	void setScore(double s)
	{score = s;}
	//accessor functions
	double getScore() const
	{return score;}
	char getLetterGrade() const;
};
#endif

//

