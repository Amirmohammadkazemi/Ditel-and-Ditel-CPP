/* Libraries */
#include <iostream>
#include <string>
#include "GradeBook.h"

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

/* determine class avrage based on 10 grades enteredby user */
void GradeBook::determineClassAvrage() {
	int total = 0; /* sum of grades */
	int gradeCounter = 1; /* number of grades */
	int grade; /* grade value */
	int avrage; /* avrage of grades */

	cout << endl; /* add new line befor get and determine avrage */
	while (gradeCounter <= 10)
	{
		cout << "Enter grade "<< gradeCounter << " :> "; /* show message for get grades */
		cin >> grade; /* get grades from user */
		total = total + grade; /* add grade to total */
		gradeCounter += 1; /* increment counter by 1 */
	}
	
	avrage = total/10; /* determine avrage of grades */

	/* display total and average of grades */
	cout << "\nTotal of all 10 grades is " << total << endl;
}