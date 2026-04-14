#include "GradedActivity.h"

//****************************************************
//member fucntion GradedActivity::getLetterGrade     *
//****************************************************

char GradedActivity::getLetterGrade() const
{
	char letterGrade; //to hold the letter grade
	if (score > 89)
		letterGrade = 'A';
	else if (score > 79)
		letterGrade = 'B';
	else if (score > 69)
		letterGrade = 'C';
	else if (score > 59)
		letterGrade = 'D';
	else
		letterGrade = 'F';

	return letterGrade;
}

//IMPLEMENTATION ON CPP