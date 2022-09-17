#include <string>

class GradeBook
{
   public:
      const static int students = 10;
      const static int tests = 3;

      GradeBook(std::string, const int[][tests]);

      void setCourseName(std::string);
      std::string getCourseName();
      void displayMessage();
      void processGrades();
      int getMinimum();
      int getMaximum();
      double getAverage(const int[], const int);
      void outputBarChart();
      void outputGrades();
   
   private:
      std::string courseName;
      int grades[students][tests];
};