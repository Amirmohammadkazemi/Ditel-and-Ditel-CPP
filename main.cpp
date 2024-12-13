/** Libraries **/
#include <iostream>
#include <ostream>
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
	GradeBook1.getGradesValue();
	//GradeBook1.displayGradesVlaue();

	vector<double> grades = GradeBook1.grades;
	Analysis gb1Analysis;
	double maxValue = gb1Analysis.maxim(vector<double>(grades));
	double minValue = gb1Analysis.minim(vector<double>(grades));
    double avrageValue = gb1Analysis.avrage(grades);

	cout << "The max grade is " << maxValue << endl;
	cout << "The min grade is " << minValue << endl;
    cout << "The avrage of grades is " << avrageValue << endl;

	return 0;
}
