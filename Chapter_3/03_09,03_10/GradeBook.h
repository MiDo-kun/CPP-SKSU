// Fig. 3.9: GradeBook.h
#include <string>
#include <iostream>

class GradeBook {
    public:
        GradeBook(std::string name) {
            setCourseName(name); 
        }

        void setCourseName(std::string name) {
            courseName = name; 
        } 
        
        std::string getCourseName() {
            return courseName; 
        } 

        void displayMessage() {
            std::cout << "\n Welcome to the grade book for \n" << getCourseName() << "!" << std::endl;
        } 

    private:
    std::string courseName;
};