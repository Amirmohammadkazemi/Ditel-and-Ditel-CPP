// Libraries
#include <iostream>
#include "GradeBook.h"
#include <iomanip>

// Name spaces
using namespace std;

// Constructor
GradeBook::GradeBook(string name) {
    setCourseName(std::move(name));
    aCount = 0;
    bCount = 0;
    cCount = 0;
    dCount = 0;
    fCount = 0;
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

// Input arbitrary number of grades from user; update grade counter
void GradeBook::inputGrades() {
    int grade;

    cout<<"Enter the letter grades.\nEnter the EOF character to end input\n";

    while((grade = cin.get()) != EOF) {
        switch (grade) {
            case 'A':
            case 'a':
                aCount += 1;
                break;

            case 'B':
            case 'b':
                bCount += 1;
                break;

            case 'C':
            case 'c':
                cCount += 1;
                break;

            case 'D':
            case 'd':
                dCount += 1;
                break;

            case 'F':
            case 'f':
                fCount += 1;
                break;

            case '\n':
            case '\t':
            case ' ':
                break;

            default:
                cout<<"Incorrect letter grade entered. Enter valid letter grade!\n";
                break;
        }
    }
}


// display a report based on the grades entered by use
void GradeBook::displayGradeReport() {
    cout<<"Number of student who received each letter grade:\n";
    cout<<"\nA: "<<aCount<<endl;
    cout<<"\nB: "<<bCount<<endl;
    cout<<"\nC: "<<cCount<<endl;
    cout<<"\nD: "<<dCount<<endl;
    cout<<"\nF: "<<fCount<<endl;
}