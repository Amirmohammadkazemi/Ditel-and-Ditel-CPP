// Libraries
#include <conio.h>
#include "GradeBook.h"
#include "Analysis.h"

// Namespaces
using namespace std;

// Main function
int main() {

    Analysis application; //application object

    application.processExamResults(); //processExamResults method for application object

    getch();
    return 0;
}
