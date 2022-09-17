#include <iostream> 

class GradeBook { 
    public:
        void displayMessage() {
            std::cout << "Welcome to the Gradbook!" << '\n';
        }
}; 

int main() {
    GradeBook myGradeBook; 
    myGradeBook.displayMessage(); 
    
    return 0; 
} 
