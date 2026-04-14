#pragma once
#ifndef ESSAY_H
#define ESSAY_H
#include "GradedActivity.h"

using namespace std;

class Essay:public GradedActivity
{
private:
	double grammar; //points for grammer
	double spelling; //points for spelling
	double length; //points for length
	double content; //points for content
	// double score from GradedActivity Parent 
public:
	//default constuctor
	Essay()
	{
		grammar = 0.0;
		spelling = 0.0;
		length = 0.0;
		content = 0.0;
	}

	//constructor
	Essay(double newGrammar, double newSpelling, double newLength, double newContent)
	{
		set(newGrammar, newSpelling, newLength, newContent);
	}

	//mutator fucntions
	void set(double, double, double, double); //defined in Essay.cpp

	//accessor functions
	double getGrammar() const
	{
		return grammar;
	}

	double getSpelling() const
	{
		return spelling;
	}

	double getLength() const
	{
		return length;
	}

	double getContent() const
	{
		return content;
	}
};
#endif

