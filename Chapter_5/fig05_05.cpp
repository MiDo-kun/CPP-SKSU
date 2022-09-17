#include <iostream>

int main()
{
   int total = 0;

   for (int number = 2; number <= 20; number += 2)
      total += number;

   std::cout << " Sum is " << total << std::endl;
   
   return 0;
}