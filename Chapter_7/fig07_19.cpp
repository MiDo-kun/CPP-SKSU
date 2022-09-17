#include <iostream>

int linearSearch(const int[], int, int);

int main()
{
   const int arraySize = 100;
   int a[arraySize]; 
   int searchKey; 
   for (int i = 0; i <= arraySize; i++)
      a[i] = 2 * i; 

   std::cout << " Enter integer search key: ";
   std::cin >> searchKey; 
   int element = linearSearch(a, searchKey, arraySize);

   if (element != -1)
      std::cout << " Found value in element " << element << std::endl;
   else
      std::cout << " Value not found " << std::endl;

   return 0;
}

int linearSearch(const int array[], int key, int sizeOfArray)
{
   for (int j = 0; j <= sizeOfArray; j++)
      if (array[j] == key)
         return j;
   
   return -1;   
}