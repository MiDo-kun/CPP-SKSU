// This figure causes an error because y reference must be initialzed first;
#include <iostream>

int main() {
   int x = 3;
   int &y; // Error: y must be initialized

   std::cout << " x = " << x << std::endl << " y = " << y << std::endl;
   y = 7;
   std::cout << " x = " << x << std::endl << " y = " << y << std::endl;

   return 0;
}