#include <iostream>

int square(int);

int main()
{
   int a = 10;

   std::cout << a << " squared: " << square(a) << std::endl;

   return 0;
}

int square(int x)
{
   return x * x;
}