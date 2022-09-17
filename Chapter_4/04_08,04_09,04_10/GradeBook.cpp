// Fig. 4.9: GradeBook.cpp
#include <iostream>
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
                  << " Limiting courseName to first 25 characters \n" << std::endl; 
    }
}

std::string GradeBook::getCourseName() {
    return courseName;
} 

void GradeBook::displayMessage() {
    std::cout << " Welcome to the grade book for \n" << getCourseName() << "! \n" << std::endl;
}

void GradeBook::determineClassAverage() {
    int total = 0;
    int gradeCounter = 1;
    int grade;
    int average;
    
    while ( gradeCounter <= 10) {
        std::cout << " Enter grade: ";
        std::cin >> grade;
        total = total + grade;
        gradeCounter = gradeCounter + 1;
    }

    average = total / 10;

    std::cout << "\n Total of all 10 grades is " << total << std::endl;
    std::cout << " Class Average is " << average << std::endl;

}