// Fig. 3.12: GradeBook.cpp
#include <iostream>
#include "GradeBook.h"

GradeBook::GradeBook(std::string name) {
    setCourseName(name);
}

void GradeBook::setCourseName(std::string name) {
    courseName = name;
}

std::string GradeBook::getCourseName() {
    return courseName;
}

void GradeBook::displayMessage() {
    std::cout << " Welcome to the Grade Book for \n" << getCourseName() << " ! " << std::endl; 
}