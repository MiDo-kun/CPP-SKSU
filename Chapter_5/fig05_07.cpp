#include <iostream>

int main()
{
   int counter = 1;

   do
   {
      std::cout << counter << " ";
      counter++;
   } while (counter <= 10);

   std::cout << std::endl;
   return 0;
}