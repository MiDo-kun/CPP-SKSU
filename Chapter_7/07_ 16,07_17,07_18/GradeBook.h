// interface
#include <string>

class GradeBook 
{
   public:
      const static int students = 10; 
      GradeBook(std::string, const int[]);

      void setCourseName(std::string); 
      std::string getCourseName();
      void displayMessage();
      void processGrades();
      int getMinimum();
      int getMaximum();
      double getAverage();
      void outputBarChart();
      void outputGrades();

   private:
      std::string courseName;
      int grades[students];
};