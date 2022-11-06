// Libraries
#include <iostream>
#include "GradeBook.h"
#include <iomanip>

// Name spaces
using namespace std;

// Constructor
GradeBook::GradeBook(string name) {
    setCourseName(std::move(name));
}

// Setting course name
void GradeBook::setCourseName(string name) {
    if(name.length() >= 25) {
        courseName = name.substr(0,25);
        cout<<"Course name is to long. Course name limited to first 25 character.\n";
        cout<<"Your course name is "<<courseName<<endl;
    }
    else {
        courseName = name;
    }
}

// Return course name
string GradeBook::getCourseName() {
    return courseName;
}

// Display welcome message to the GradeBook user
void GradeBook::displayMessage() {
    cout<<"\nWelcome to the grade book for...\n\t"<<getCourseName()<<endl;
}

// Determine class average
void GradeBook::determineClassAverage() {
    float total; // sum of grades
    int gradeCounter; //number of grades
    float grade; // grade value entered
    double average; // average of grades

    total = 0;
    gradeCounter = 1;
    average = 0;

    cout<<"Enter grade or -1 for quit: ";
    cin>>grade;

    // get data and processing for calculate average
    while(grade != -1) {
        total = total + grade;
        gradeCounter = gradeCounter + 1;

        cout<<"Enter grade or -1 for quit: ";
        cin>>grade;
    }

    // termination phase
    if(gradeCounter != 0) {
        average = static_cast<double>(total) / gradeCounter;
    }

    // display total, average and grades
    cout<<"\nTotal of all "<<gradeCounter<<" grades is: "<<total<<endl;
    cout<<"Class average is: "<<average;
}