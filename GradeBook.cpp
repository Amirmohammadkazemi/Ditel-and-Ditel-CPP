/* Libraries */
#include <iostream>
#include <string>
#include "GradeBook.h"
#include <iomanip>
#include <vector>
#include <string>

/* namespaces */
using namespace std;

/* constractor initializer course name with string suplied as argument */
GradeBook::GradeBook(string name)
{
	setCourseName(name); /* call set function to initialize course name */
	/* initialize count of grades levels */
	aCount = 0;
	bCount = 0;
	cCount = 0;
	dCount = 0;
	fCount = 0;
}

/* set course name */
void GradeBook::setCourseName(string name)
{
	if (name.length() <= 25)
		courseName = name; /* if length > 25 store course name in object */
	else
	{
		courseName = name.substr(0, 25); /* set course name to firs 25 characters of parameter name */
		cout << "Name: "
			 << "\"" << name << "\""
			 << " exceeds maximum length (25).\n"
			 << "Limiting course name to first 25 characters.\n"
			 << endl;
	}
}

/* return course name */
string GradeBook::getCourseName()
{
	return courseName; /* rerturn objec's course name*/
}

/* display welcome message to user */
void GradeBook::displayMessage()
{
	cout << "\nWelcome to the garde book for " << getCourseName() << endl;
}

/* determine class average based on 10 grades enteredby user */
void GradeBook::determineClassAverage()
{
	int total = 0;		  /* sum of grades */
	int gradeCounter = 0; /* number of grades */
	int grade;			  /* grade value */
	double average;		  /* average of grades */

	cout << endl;													 /* add new line befor get and determine average */
	cout << "Enter grade " << gradeCounter << " or -1 for quit :> "; /* show message for get grades */
	cin >> grade;													 /* get first grade from user */

	while (grade != -1)
	{
		total = total + grade; /* add grade to total */
		gradeCounter += 1;	   /* increment counter by 1 */

		cout << "Enter grade " << gradeCounter << " or -1 for quit :> "; /* show message for get grades */
		cin >> grade;													 /* get grades from user */
	}

	if (gradeCounter != 0)
	{
		/* display total and average (with two digits of precision) */
		average = static_cast<double>(total) / gradeCounter;

		/* display total and average of grades */
		cout << "\nTotal of all " << gradeCounter << " grades is " << total << endl;

		cout << "Class average is " << setprecision(2) << fixed << average << endl;
	}
	else
		cout << "No grades were entered" << endl;
}

/* get grades value in base of numbers */
void GradeBook::getGradesValue()
{
	cout << "Enter grades value (not level)" << endl
		 << "Enter the '0' charachter to end input." << endl;

	while (true)
	{
		string _val;
		cin >> _val;

		// convert string to number
		stringstream stream(_val);
		double num_val;
		stream >> num_val;

		// check stream for error
		if (stream.fail())
			continue;

		// add grade to grades vector
		grades.push_back(num_val);

		// exit if user enter 0
		if (num_val == 0)
			break;
		
		//TODO: Set limit for grades values
	}
	grades.pop_back(); // delete 0 in the last of grades vector
}

/* show grades value */
void GradeBook::displayGradesVlaue()
{
	cout << "\n===============" << endl;
	cout << "Grades value of class:" << endl;
	for (auto i : grades)
		cout << i << " ";
	cout << endl;
}

/* get letter grade and append to a level */
void GradeBook::inputGrades()
{
	int grade; /* grade entered by user */
	cout << "\nEnter letter grade. " << endl
		 << "Enter the '0' charachter to end input." << endl;

	while ((grade = cin.get()) != '0')
	{
		switch (grade)
		{
		case 'a':
		case 'A':
			aCount++;
			break;

		case 'b':
		case 'B':
			bCount++;
			break;

		case 'c':
		case 'C':
			cCount++;
			break;

		case 'd':
		case 'D':
			dCount++;
			break;

		case 'f':
		case 'F':
			fCount++;
			break;

		case '\n':
		case '\t':
		case ' ':
		case EOF:
			break;

		default:
			cout << "Incorrect letter grade entered. "
				 << "Enter new grade." << endl;
			break;
		}
	}
}

/* show a report based on grade entered by user */
void GradeBook::displayGradesReport()
{
	cout << "\n\nNumber of students who recived each letter grade:"
		 << "\nA -> " << aCount
		 << "\nB -> " << bCount
		 << "\nC -> " << cCount
		 << "\nD -> " << dCount
		 << "\nF -> " << fCount
		 << endl;
}