#include <iostream>

void printArray(const int[][3]);

int main()
{
   int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};
   int array2[2][3] = {1, 2, 3, 4, 5};
   int array3[2][3] = {{1, 2}, {4}};

   std::cout << " Values in array1 by row are: " << std::endl;
   printArray(array1);
   std::cout << "\n Values in array1 by row are: " << std::endl;
   printArray(array2);
   std::cout << "\n Values in array1 by row are: " << std::endl;
   printArray(array3);
   return 0;
}

void printArray(const int a[][3])
{
   for (int i = 0; i < 2; i++)
   {
      std::cout << " ";
      for (int j = 0; j < 3; j++)
         std::cout << a[i][j] << " ";

      std::cout << std::endl;
   }
}