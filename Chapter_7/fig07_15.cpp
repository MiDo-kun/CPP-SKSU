// This figure is an error because const connot be modified due in the tryToModifyArray();
#include <iostream>

void tryToModifyArray(const int[]);

int main()
{
   int a[] = {10, 20, 30};

   tryToModifyArray(a);

   std::cout << a[0] << " " << a[1] << " " << a[2] << '\n';

   return 0;
}

void tryToModifyArray(const int b[])
{
   b[0] = 2; 
   b[1] = 2; 
   b[2] = 2; 
}