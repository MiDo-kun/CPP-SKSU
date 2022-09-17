#include <iostream>

int main()
{
   const int arraySize = 10;
   int a[arraySize] = {87, 68, 94, 100, 83, 78, 85, 91, 76, 87};
   int total;

   for (int i = 0; i < arraySize; i++)
   {
      total += a[i];
   }

   std::cout << " Total of array elements: " << total << std::endl;

   return 0;
}