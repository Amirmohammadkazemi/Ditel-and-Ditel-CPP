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
		void inputGrades();			  /* get arbitrary number of grades from user */
		void displayGradesReport(); /* display report of grades */

	private:
		string courseName; /* name of corse in this grade book */
		int aCount; /* Count of grade a */
		int bCount;	/* Count of grade b */
		int cCount; /* Count of grade c */
		int dCount; /* Count of grade d */
		int fCount;	/* Count of grade f */
};
