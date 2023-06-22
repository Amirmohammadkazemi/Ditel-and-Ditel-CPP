/** Libraries **/
#include <iostream>
#include "GradeBook.h"
#include "Analysis.h"

/** namespace(s) **/
using namespace std;

/** Main function **/
int main() {

	GradeBook GradeBook1("Advance programming C11 2023");
	GradeBook GradeBook2("Database-des E51 2023");

	cout << "Grade book created for " << GradeBook1.getCourseName() << endl;
	cout << "Grade book created for " << GradeBook2.getCourseName() << endl;
	
	GradeBook1.displayMessage();
	GradeBook1.inputGrades();
	GradeBook1.displayGradesReport();

	return 0;

}
