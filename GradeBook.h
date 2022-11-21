#ifndef DITEL_AND_DITEL_CPP_GRADEBOOK_H
#define DITEL_AND_DITEL_CPP_GRADEBOOK_H

// Libraries
#include <string>

// Namespaces
using namespace std;

// Classes
class GradeBook {
public:
    explicit GradeBook(string name); //constructor
    void setCourseName(string name); //set course name
    string getCourseName(); //display course name
    void displayMessage(); //display welcome message

private:
    string courseName; //set course name

    //control statements
    int aCount;
    int bCount;
    int cCount;
    int dCount;
    int fCount;
};


#endif //DITEL_AND_DITEL_CPP_GRADEBOOK_H
