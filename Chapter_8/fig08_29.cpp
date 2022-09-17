#include <iostream>

void function0(int);
void function1(int);
void function2(int);

int main() {
   // Initializing pointer of arrays
   void (*f[3])(int) = {function0, function1, function2};
   int choice;

   std::cout << " Enter a number between 0 and 2, 3 to end " << '\n';
   std::cout << " Choice: ";
   std::cin >> choice;

   while ((choice >= 0) && (choice < 3)) {
      (*f[choice])(choice);
      std::cout << "\n Enter a number between 0 and 2, 3 to end " << '\n';
      std::cout << " Choice: ";
      std::cin >> choice;
   }

   std::cout << " Program execution completed " << '\n';

   return 0;
}

void function0(int a) {
   std::cout << " You entered " << a << " so function0 was called " << '\n';
}

void function1(int b) {
   std::cout << " You entered" << b << " so function1 was called " << '\n';
}

void function2(int c) {
   std::cout << " You entered " << c << " so function was called " << '\n';
}