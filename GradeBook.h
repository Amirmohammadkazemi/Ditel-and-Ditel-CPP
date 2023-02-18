/* Libraries */
#include <iostream>

/* namespaces */
using namespace std;

/*** Classes ***/

/* GradeBook */
class GradeBook {
	public:
		/* constractor initializer course name with string suplied as argument */
		GradeBook(string name) {
			setCourseName(name); /* call set function to initialize course name */
		}

		/* set course name */
		void setCourseName(string name) {
			courseName = name;
		}

		/* return course name */
		string getCourseName() {
			return courseName; /* rerturn objec's course name*/
		}

		/* display welcome message to user */
		void displayMessage() {
			cout << "Welcome to the garde book for " << getCourseName() << endl;
		}

	private:
		string courseName; /* name of corse in this grade book */
};
