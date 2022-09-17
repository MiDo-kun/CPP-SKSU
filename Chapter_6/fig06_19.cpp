#include <iostream>

int squareByValue(int);
void squareByReference(int &);

int main()
{
   int x = 2;
   int z = 4;

   std::cout << " x = " << x << " before squareByValue \n";
   std::cout << " Value returned by squareValue " << squareByValue(x) << std::endl;
   std::cout << " x = " << x << " after squaredByValue \n"
             << std::endl;

   std::cout << " z = " << z << " before squareByReference " << std::endl;
   squareByReference(z);
   std::cout << " z = " << z << " after squareByReference " << std::endl;

   return 0;
}

int squareByValue(int number)
{
   return number *= number;
}

void squareByReference(int &numberRef)
{
   numberRef *= numberRef;
}