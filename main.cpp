/** Libraries **/
#include <iostream>

/** namespace(s) **/
using namespace std;

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

/** Main function **/
int main() {

	GradeBook GradeBook1("Advance programming C11 2023");
	GradeBook GradeBook2("Database design E51 2023");

	cout << "Grade book created for " << GradeBook1.getCourseName() << endl;
	cout << "Grade book created for " << GradeBook2.getCourseName() << endl;

}
