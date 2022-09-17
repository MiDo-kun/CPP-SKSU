#include <iostream>
#include "Analysis.h"

void Analysis::processExamresults() {
    int passes = 0;
    int failures = 0;
    int studentCounter = 1;
    int result;

    while (studentCounter <= 10) {
        std::cout << " Enter result ( 1 = pass, 2 = fail ): ";
        std::cin >> result;

        if (result == 1) 
            passes++;
        else 
            failures++;

    studentCounter++;
    }

    std::cout << " Passed: " << passes << "\n Failed: " << failures << std::endl;

    if (passes >= 8) 
        std::cout << " Raise tuition " << std::endl;
}