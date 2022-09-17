#include <iostream>
#include <iomanip> 
#include <cstdlib> 
#include <ctime> 

int main()
{
   const int arraySize = 7;

   int frequency[arraySize] = {0};

   std::srand(time(0));

    for (int roll = 1; roll <= 6000000; roll++)
      frequency[1 + std::rand() % 6]++;

   std::cout << "Face" << std::setw(13) << "Frequency" << std::endl;
     for (int face = 1; face < arraySize; face++)
      std::cout << std::setw(4) << face << std::setw(13) << frequency[face] << std::endl;

   return 0;
}