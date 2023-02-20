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