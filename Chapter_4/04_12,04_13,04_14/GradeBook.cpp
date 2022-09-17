// Fig. 4.13: GradeBook.cpp
#include <iostream>
#include <iomanip>
#include "GradeBook.h"

GradeBook::GradeBook(std::string name) {
    setCourseName(name);
}

void GradeBook::setCourseName(std::string name) {
    if (name.length() <= 25)
        courseName = name;
    else {
        courseName = name.substr(0, 25);
        std::cout << " Name \"" << name << "\" exceeds maximum length (25). \n"
                  << " Limting courseName to first 25 characters. \n" << std::endl;
    }
} 

std::string GradeBook::getCourseName() {
    return courseName;
}

void GradeBook::displayMessage() {
    std::cout << " Welcome to the grade book for \n" << getCourseName() << "!\n" << std::endl;
}

void GradeBook::determineClassAverage() {
    int total = 0;
    int gradeCounter = 0;
    int grade;
    double average;

    std::cout << " Enter grade or -1 to quit: ";
    std::cin >> grade;

    while (grade != -1) {
        total = total  + grade;
        gradeCounter++;

        std::cout << " Enter grade or -1 to quit: ";
        std::cin >> grade;
    }

    if (gradeCounter != 0) {
        average = static_cast<double>(total) / gradeCounter;

        std::cout << "\n Total of all " << gradeCounter << " grade entered is " << total << std::endl;
        std::cout << " Class Average is : " << std::setprecision(2) << std::fixed << average << std::endl;
    } else {
        std::cout << " No grades were entered! " << std::endl;
    }
}