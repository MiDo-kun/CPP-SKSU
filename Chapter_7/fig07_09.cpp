#include <iostream>
#include <iomanip> 

int main()
{
   const int arraySize = 11; 
   int n[arraySize] = {0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1};

   std::cout << "Grade Distribution" << std::endl; 

   for (int i = 0; i < arraySize; i++)
   {
      if (i == 0)
         std::cout << "  0-9:";
      else if (i == 10)
         std::cout << "  100: ";
      else
         std::cout << i * 10 << "-" << (i * 10) + 9 << ": ";

      for (int stars = 0; stars < n[i]; stars++) 
         std::cout << " *";
      
      std::cout << std::endl;
   }

   return 0;
}