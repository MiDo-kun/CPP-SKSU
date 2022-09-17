// implementation
#include <iostream>
#include <iomanip>
#include "GradeBook.h"

GradeBook::GradeBook(std::string name, const int gradesArray[])
{
   setCourseName(name);

   for (int grade = 0; grade < students; grade++)
      grades[grade] = gradesArray[grade];
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
   std::cout << students <<  std::endl;
   std::cout << "Welcome to the grade book for \n"
             << getCourseName() << "!" << std::endl;
}

void GradeBook::processGrades()
{
   outputGrades();

   std::cout << "\nClass average is " << std::setprecision(2) << std::fixed << getAverage() << std::endl;
   std::cout << "Lowest grade is " << getMinimum() << "\nHighest grade is " << getMaximum() << std::endl;

   outputBarChart();
}

int GradeBook::getMinimum()
{
   int lowGrade = 100;

   for (int grade = 0; grade < students; grade++)
   {
      if (grades[grade] < lowGrade)
         lowGrade = grades[grade];
   }

   return lowGrade;
}

int GradeBook::getMaximum()
{
   int highGrade = 0;

   for (int grade = 0; grade < students; grade++)
   {
      if (grades[grade] > highGrade)
         highGrade = grades[grade];
   }

   return highGrade;
}

double GradeBook::getAverage()
{
   int total = 0;

   for (int grade = 0; grade < students; grade++)
      total += grades[grade];

   return static_cast<double>(total) / students;
}

void GradeBook::outputBarChart()
{
   std::cout << "\nGrade Distribution " << std::endl;

   const int frequencySize = 11;
   int frequency[frequencySize] = {0};

   for (int grade = 0; grade < students; grade++)
      frequency[grades[grade] / 10]++;

   for (int count = 0; count < frequencySize; count++)
   {
      if (count == 0)
         std::cout << "   0-9: ";
      else if (count == 10)
         std::cout << "   100: ";
      else
         std::cout << " " <<count * 10 << "-" << (count * 10) + 9 << ": ";

      for (int stars = 0; stars < frequency[count]; stars++)
         std::cout << "*";

      std::cout << std::endl;
   }
}

void GradeBook::outputGrades()
{
   std::cout << "\nThe grades are:\n\n";

   for (int student = 0; student < students; student++)
      std::cout << " Student " << std::setw(2) << student + 1 << ": " << std::setw(3) << grades[student] << std::endl;
}
