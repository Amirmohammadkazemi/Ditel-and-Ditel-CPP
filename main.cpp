// Libraries
#include <conio.h>
#include "GradeBook.h"

// Namespaces
using namespace std;

// Main function
int main() {
    GradeBook gradebook1("Advance programming with c++ and python 01022");

    gradebook1.displayMessage();

    gradebook1.determineClassAverage();

    getch();
    return 0;
}
