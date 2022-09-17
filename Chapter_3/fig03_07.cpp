// Fig03_07.cpp
#include <iostream> 
#include <string> 

class GradeBook {

    public:
        GradeBook(std::string name) {
            setCourseName(name); 
        }

        void setCourseName(std::string name) {
            courseName = name; // store 
        } 

        std::string getCourseName() {
            return courseName; 
        } 

        void displayMessage() {
            std::cout << " Welcome to the grade book for \n" << getCourseName() << "!" << std::endl;
        } 

    private:
        std::string courseName;

}; 

int main() {
    GradeBook gradeBook1("CS101 Introduction to C++ Programming"); 
    GradeBook gradeBook2("CS102 Data Structures in C++"); 

    std::cout << " gradeBook1 created for course: " << gradeBook1.getCourseName() 
              << "\n gradeBook2 created for course: " << gradeBook2.getCourseName() << std::endl;
    
    return 0; 
} 