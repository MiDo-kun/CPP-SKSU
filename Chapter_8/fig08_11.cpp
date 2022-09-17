#include <iostream>

void printCharacters(const char *sPtr) {
   for (; *sPtr != '\0'; sPtr++)
      std::cout << *sPtr;
}

int main() {
   const char phrase[] = "print characters of a string";
   
   std::cout << " The string is:\n ";
   printCharacters(phrase);

   return 0;
}