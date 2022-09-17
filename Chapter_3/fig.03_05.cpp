#include <iostream>
#include <string>


class GradeBook {
    
    public:
        void setCourseName(std::string name){
            courseName = name;
        }

        std::string getCourseName() {
            return courseName;
        }

        void displayMessage() {
            std::cout << " Welcome to the grade book for\n " << getCourseName() << "!" << std::endl;
        }

    private:
        std::string courseName;

}; 


int main() {

    std::string nameOfCourse; 
    GradeBook myGradeBook;

    std::cout << " Initial course name is: " << myGradeBook.getCourseName() << std::endl;
    std::cout << "\n Please enter the course name: \n ";
    std::getline(std::cin, nameOfCourse); 
    
    myGradeBook.setCourseName(nameOfCourse); 
    std::cout << std::endl; 

    myGradeBook.displayMessage(); 

    return 0;

}
