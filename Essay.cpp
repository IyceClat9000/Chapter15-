#include "Essay.h"


//****************************************************
//                                                   *
//****************************************************

void Essay::set(double newGrammar, double newSpelling, double newLength, double newContent)
{
	double numericScore = 0.0; //to hold the numeric score

	//set number of points

	grammar = newGrammar;
	spelling = newSpelling;
	length = newLength;
	content = newContent;

	numericScore = (grammar + spelling + length + content);

	//call the inherited setScore function to set numeric score
	setScore(numericScore);
}