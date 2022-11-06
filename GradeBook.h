#ifndef DITEL_AND_DITEL_CPP_GRADEBOOK_H
#define DITEL_AND_DITEL_CPP_GRADEBOOK_H

// Libraries
#include <string>

// Namespaces
using namespace std;

// Classes
class GradeBook {
public:
    explicit GradeBook(string name);
    void setCourseName(string name);
    string getCourseName();
    void displayMessage();
    void determineClassAverage();
private:
    string courseName;
};


#endif //DITEL_AND_DITEL_CPP_GRADEBOOK_H
