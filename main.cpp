// Libraries
#include <conio.h>
#include "GradeBook.h"
#include "Analysis.h"

// Namespaces
using namespace std;

// Main function
int main() {

    GradeBook gradeBook1("Advance programming C++ 11023");
    gradeBook1.displayMessage();
    gradeBook1.inputGrades();
    gradeBook1.displayGradeReport();

    getch();
    return 0;
}
