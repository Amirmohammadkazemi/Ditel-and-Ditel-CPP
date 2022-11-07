//libraries
#include <iostream>
#include "Analysis.h"

//namespaces
using namespace std;

void Analysis::processExamResults() {
    int passes = 0; //number of passes
    int failures = 0; //number of failures
    int studentCounter = 1; //student counter
    int result = 0; //one exam result\

    //process student with counter-control loop
    while(studentCounter <= 10) { // start value of studentCounter is "1"
        cout<<"Enter result: ";
        cin>>result;

        if(result >= 10)
            passes = passes +1;
        else
            failures = failures + 1;

        studentCounter = studentCounter + 1;
    }

    cout<<"Passed: "<<passes<<endl<<"failures: "<<failures<<endl;
}
