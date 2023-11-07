/* Libraries */
#include <iostream>
#include "Analysis.h" /*include analusis library*/
#include <algorithm>
#include "GradeBook.h"
#include <vector>

/* Name spaces */
using namespace std;

void Analysis::processExamResults()
{
    int passes = 0;         /*number of passes students*/
    int failures = 0;       /*number of failures students*/
    int studentCounter = 1; /*number of students*/
    int result;             /*one exam result*/

    // Process 10 student using counter-control loop
    while (studentCounter <= 10)
    {
        cout << "Enter result (1 for pass & 2 for fail) => ";
        cin >> result; /*input resault*/

        if (result == 1)
            passes = passes + 1;
        else
            failures += 1;

        studentCounter += 1;
    }

    // Display passed and failed number
    cout << "Passed " << passes << "Faild " << failures;

    if (passes < 8)
        cout << "Raise tuition" << endl;
}

/* return maximum of grades */
double Analysis::maxim(std::vector<double>grades)
{
    double max_value = grades[0];
    for (int i = 1; i < grades.size(); i++)
    {
        if (grades[i] > max_value)
        {
            max_value = grades[i];
        }
    }
    return max_value;
}