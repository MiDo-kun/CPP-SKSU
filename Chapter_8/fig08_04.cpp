#include <iostream>

int main() {
   int a;
   int *aPtr;

   a = 7;
   aPtr = &a;

   std::cout << " The address of a is: " << &a << '\n';
   std::cout << " The value of aPtr is " << aPtr << '\n';

   std::cout << "\n The value of a is " << a << '\n';
   std::cout << " The value of *aPtr is " << *aPtr << '\n';

   std::cout << "\n Showing that * and & are inverse of each other." << '\n';
   std::cout << " &* aPtr = " << &*aPtr << '\n';
   std::cout << " *&aPtr = " << *&aPtr << '\n';

   return 0;
}
