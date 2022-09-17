#include <iostream>
#include <iomanip>

int main()
{
   const int arraySize = 10;

   int s[arraySize];

   for (int i = 0; i < arraySize; i++)
   {
      s[i] = 2 + 2 * i;
   }

   std::cout << " Element " << std::setw(13) << " Value " << std::endl;

   for (int j = 0; j < arraySize; j++)
   {
      std::cout << std::setw(7) << j << std::setw(13) << s[j] << std::endl;
   }

   return 0;
}