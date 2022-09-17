#include <iostream>
#include <cctype>

void convertToUpperCase(char *sPtr) {
   while (*sPtr != '\0') {
      if (std::islower(*sPtr)) 
         *sPtr = toupper(*sPtr);
      
      sPtr++;
   }
}

int main() {
   char phrase[] = "characters and $32.98";

   std::cout << " The phrase before the conversion is: " << phrase << '\n';;
   
   convertToUpperCase(phrase);
   std::cout << " The phrase after conversion is: " << phrase << '\n';

   return 0;
}