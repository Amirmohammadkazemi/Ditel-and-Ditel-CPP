/* Libraries */
#include <iostream>
#include <string>

/* namespaces */
using namespace std;

/*** Classes ***/

/* GradeBook */
class GradeBook {
	public:
		GradeBook(string); /* constractor initializer course name with string suplied as argument */
		void setCourseName(string); /* set course name */
		string getCourseName(); /* return course name */
		void displayMessage(); /* display welcome message to user */
		void determineClassAverage(); /* averages grades entered by the user */

	private:
		string courseName; /* name of corse in this grade book */
};
