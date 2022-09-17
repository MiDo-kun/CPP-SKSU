#include <iostream>

int number = 7;

int main() {
   double number = 10.5;

   std::cout << " Local double value of number = " << number 
            << "\n Local int value of number = " << ::number << std::endl;

   return 0; 
}