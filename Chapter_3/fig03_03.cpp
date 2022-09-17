#include <iostream>
#include <string>


class GradeBook {
    public:
        void displayMessage(std::string courseName) {
            std::cout << "Welcome to the grade book for\n" << courseName << "!" << std::endl;
        }
    private:
        std::string courseName;
};


int main() {    
    std::string nameOfCourse;
    GradeBook myGradeBook;

    std::cout << " Please enter the course name: " << std::endl;
    getline(std::cin, nameOfCourse);
    std::cout << std::endl;

    myGradeBook.displayMessage(nameOfCourse);
    return 0;
}