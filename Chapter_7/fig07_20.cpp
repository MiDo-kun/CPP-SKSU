#include <iostream>
#include <iomanip>

int main()
{
   const int arraySize = 5;
   int data[arraySize] = {21, 10, 32, 31, 1};
   int insert;

   std::cout << " Unsorted Array: " << std::endl;

   for (int i = 0; i < arraySize; i++)
      std::cout << std::setw(4) << data[i];

   for (int next = 1; next < arraySize; next++)
   {
      insert = data[next]; 

      int moveItem = next; 

      while (data[moveItem - 1] > insert)
      {  
         data[moveItem] = data[moveItem - 1];
         moveItem--; 
      }

      data[moveItem] = insert;
   }

   std::cout << std::endl;
   std::cout << " Sorted Array: " << std::endl;

   for (int i = 0; i < arraySize; i++)
      std::cout << std::setw(4) << data[i];

   std::cout << std::endl;

   return 0;
}