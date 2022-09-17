// Fig. 3.17: fig03_17.cpp
#include <iostream>
#include "GradeBook.cpp"

int main() {

    GradeBook gradeBook1("CS101 Introduction to Programming in C++");
    GradeBook gradeBook2("CS102 C++ Data Structures");

    std::cout << " gradeBook1's initial course name is: " << gradeBook1.getCourseName()
              << "\n gradeBook2's initial course name is: " << gradeBook2.getCourseName() << std::endl;

    gradeBook1.setCourseName("CS101 C++ Programming");

    std::cout << "\n gradeBook1's course name is: " << gradeBook1.getCourseName()
              << "\n gradeBook2's course name is: " << gradeBook2.getCourseName() << std::endl;

    return 0;
}