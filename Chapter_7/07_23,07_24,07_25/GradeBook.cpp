#include <iostream>
#include <iomanip>
#include "GradeBook.h"

GradeBook::GradeBook(std::string name, const int gradesArray[][tests])
{
   setCourseName(name);

   for (int student = 0; student < students; student++)

      for (int test = 0; test < tests; test++)
         grades[student][test] = gradesArray[student][test];
}

void GradeBook::setCourseName(std::string name)
{
   courseName = name;
}

std::string GradeBook::getCourseName()
{
   return courseName;
}

void GradeBook::displayMessage()
{
   std::cout << " Welcome to the grade book for\n"
             << getCourseName() << "!" << std::endl;
}

void GradeBook::processGrades()
{
   outputGrades();

   std::cout << "\n Lowest grade in the grade book is " << getMinimum()
             << "\n Highest grade in the grade book is " << getMaximum() << std::endl;

   outputBarChart();
}

int GradeBook::getMinimum()
{
   int lowGrade = 100;

   for (int student = 0; student < students; student++)
   {
      for (int test = 0; test < tests; test++)
      {
         if (grades[student][test] < lowGrade)
            lowGrade = grades[student][test];
      }
   }
   return lowGrade;
}

int GradeBook::getMaximum()
{
   int highGrade = 0;

   for (int student = 0; student < students; student++)
   {
      for (int test = 0; test < tests; test++)
      {
         if (grades[student][test] > highGrade)
            highGrade = grades[student][test];
      }
   }
   return highGrade;
}

double GradeBook::getAverage(const int setOfGrades[], const int grades)
{
   int total = 0;

   for (int grade = 0; grade < grades; grade++)
      total += setOfGrades[grade];

   return static_cast<double>(total) / grades;
}

void GradeBook::outputBarChart()
{
   std::cout << "\n Overall grade distribution: " << std::endl;

   const int frequencySize = 11;
   int frequency[frequencySize] = {0};

   for (int student = 0; student < students; student++)
      for (int test = 0; test < tests; test++)
         ++frequency[grades[student][test] / 10];

   for (int count = 0; count < frequencySize; count++)
   {
      if (count == 0)
         std::cout << "   0-9:";
      else if (count == 10)
      std::cout << "   100: ";
      else std::cout << " " << count * 10 << "-" << (count * 10) + 9 << ": ";

      for (int stars = 0; stars < frequency[count]; stars++)
         std::cout << "*";

      std::cout << std::endl;
   }
}

void GradeBook::outputGrades()
{
   std::cout << "\n The grades are: \n\n";
   std::cout << "             ";

   for (int test = 0; test < tests; test++)
      std::cout << "  Test " << test + 1 << "  ";

   std::cout << " Average " << std::endl;

   for (int student = 0; student < students; student++)
   {
      std::cout << " Student " << std::setw(2) << student + 1;
      for (int test = 0; test < tests; test++)
         std::cout << std::setw(10) << grades[student][test];

      double average = getAverage(grades[student], tests);
      std::cout << std::setw(10) << std::setprecision(2) << std::fixed << average << std::endl;
   }
}