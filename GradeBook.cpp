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
	courseName = name;
}

/* return course name */
string GradeBook::getCourseName() {
	return courseName; /* rerturn objec's course name*/
}

/* display welcome message to user */
void GradeBook::displayMessage() {
	cout << "Welcome to the garde book for " << getCourseName() << endl;
}