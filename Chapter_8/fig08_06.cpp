#include <iostream>

int cubeByValue(int n) {
   return n * n * n;
}

int main() {
   int number = 5;

   std::cout << " The original value of number is " << number << '\n';

   number = cubeByValue(number);
   std::cout << " The value of number is " << number << '\n';

   return 0;
}