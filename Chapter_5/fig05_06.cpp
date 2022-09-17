#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
   double amount;
   double principal = 1000.0;
   double rate = .05;

   std::cout << " Year " << std::setw(21) << " Amount on deposit " << std::endl;
   std::cout << std::fixed << std::setprecision(2);

   for (int year = 1; year <= 10; year++)
   {
      amount = principal * std::pow(1.0 + rate, year);

      std::cout << std::setw(4) << year << std::setw(21) << amount << std::endl;
   }

   return 0;
}