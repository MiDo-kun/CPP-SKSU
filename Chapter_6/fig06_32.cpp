#include <iostream>
#include <iomanip>

unsigned long factorial(unsigned long);

int main()
{
   for (int counter = 0; counter <= 10; counter++)
      std::cout << std::setw(2) << counter << " != " << factorial(counter) << std::endl;

   return 0;
}

unsigned long factorial(unsigned long number)
{
   unsigned long result = 1;

   for (unsigned long i = number; i >= 1; i--)
      result *= i;

   return result;
}