// Fig 4.8: GradeBook.h
#include <string> 

class GradeBook {

    public: 
        GradeBook(std::string); 
        void setCourseName(std::string);
        std::string getCourseName();
        void displayMessage(); 
        void determineClassAverage();

    private: 
        std::string courseName; 
        
};