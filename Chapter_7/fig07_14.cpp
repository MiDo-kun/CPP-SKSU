#include <iostream>
#include <iomanip>

void modifyArray(int[], int);
void modifyElement(int);

int main()
{
   const int arraySize = 5;
   int a[arraySize] = {0, 1, 2, 3, 4};

   std::cout << " Effects of passing entire array by reference:"
             << "\n\n The values of the original array are: \n";

   for (int i = 0; i < arraySize; i++)
      std::cout << std::setw(3) << a[i];

   std::cout << std::endl;

   modifyArray(a, arraySize); // modifies a[arraySize] = {0, 1, 2, 3, 4};
   std::cout << " The values of modified array are: \n";

   for (int j = 0; j < arraySize; j++)
      std::cout << std::setw(3) << a[j];

   std::cout << "\n\n Effects of passing array element by value:"
             << "\n\n [3] before modifyElement: " << a[3] << std::endl;

   modifyElement(a[3]); // modifies a[arraySize] = {0, 1, 2, 3, 4};
   std::cout << " a[3] after modifyElement: " << a[3] << std::endl;

   return 0;
}

void modifyArray(int b[], int sizeofArray)
{
   for (int k = 0; k < sizeofArray; k++)
   {
      b[k] *= 2;
   }
}

void modifyElement(int e)
{
   std::cout << " Value of element in modifyElement: " << (e *= 2) << std::endl;
}
