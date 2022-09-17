#include <iostream>

void cubeByReference(int *nPtr) {
   *nPtr = *nPtr * *nPtr * *nPtr;
}

int main() {
   int number = 5;

   std::cout << " The original value of number is " << number << '\n';

   cubeByReference(&number);
   std::cout << " The new value of number is " << number << '\n';

   return 0;
}