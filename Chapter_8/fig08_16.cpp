#include <iostream>

size_t getSize(double *ptr) {
   return sizeof(ptr);
}

int main() {
   double array[20];

   std::cout << " The number of bytes in the array is " << sizeof(array) << '\n';
   std::cout << " the number of bytes returned by getSize is " << getSize(array) << '\n';

   return 0;
}