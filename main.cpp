#include <iostream>
#include "GradedActivity.h"
#include "Essay.h"
#include "input.h"
#include <iomanip>
using namespace std;

int main()
{
	cout << "\n\tChallenge 6 - Essay Class";
	cout << "\n";
	double grammar = 0.0;
	double spelling = 0.0;
	double length = 0.0;
	double content = 0.0;

	//get the number of grammar points
	grammar = inputDouble("\n\tEnter the number of points the student earned for grammar : ", 0.0 , 30.0);

	//get the number of spelling points
	spelling = inputDouble("\n\tEnter the number of points the student earned for spelling : ", 0.0, 20.0);

	//get the number of correct length points
	length = inputDouble("\n\tEnter the number of points the student earned for correct length : ", 0.0, 20.0);

	//get the number of content points
	content = inputDouble("\n\tEnter the number of points the student earned for content : ", 0.0, 30.0);

	Essay essay(grammar, spelling, length, content);

	//display the essay results
	cout << setprecision(2);
	cout << "\n\tThe total number of points for essay : " << essay.getScore();
	cout << "\n\tThe essay grade                      : " << essay.getLetterGrade();
	cout << "\n\n";

}