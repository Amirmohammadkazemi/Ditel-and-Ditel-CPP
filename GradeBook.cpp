/* Libraries */
#include <iostream>
#include <string>
#include "GradeBook.h"
#include <iomanip>

/* namespaces */
using namespace std;

/* constractor initializer course name with string suplied as argument */
GradeBook::GradeBook(string name) {
	setCourseName(name); /* call set function to initialize course name */
}

/* set course name */
void GradeBook::setCourseName(string name) {
	if(name.length() <= 25) {
		courseName = name; /* if length > 25 store course name in object */
	}
	else {
		courseName = name.substr(0, 25); /* set course name to firs 25 characters of parameter name */
		cout << "Name: "<< "\"" << name << "\"" << " exceeds maximum length (25).\n"
			 << "Limiting course name to first 25 characters.\n"
			 << endl;
	}
}

/* return course name */
string GradeBook::getCourseName() {
	return courseName; /* rerturn objec's course name*/
}

/* display welcome message to user */
void GradeBook::displayMessage() {
	cout << "Welcome to the garde book for " << getCourseName() << endl;
}

/* determine class average based on 10 grades enteredby user */
void GradeBook::determineClassAverage() {
	int total = 0; /* sum of grades */
	int gradeCounter = 0; /* number of grades */
	int grade; /* grade value */
	double average; /* average of grades */

	cout << endl; /* add new line befor get and determine average */
	cout << "Enter grade " << gradeCounter << " or -1 for quit :> "; /* show message for get grades */
	cin >> grade; /* get first grade from user */

	while (grade != -1)
	{
		total = total + grade; /* add grade to total */
		gradeCounter += 1; /* increment counter by 1 */

		cout << "Enter grade " << gradeCounter << " or -1 for quit :> "; /* show message for get grades */
		cin >> grade; /* get grades from user */
	}

	if(gradeCounter != 0) {
		/* display total and average (with two digits of precision) */
		average = static_cast<double>(total) / gradeCounter;

		/* display total and average of grades */
		cout << "\nTotal of all " << gradeCounter << " grades is " << total << endl;

		cout << "Class average is " << setprecision(2) << fixed << average << endl;
	}
	else
		cout << "No grades were entered" << endl;
}
