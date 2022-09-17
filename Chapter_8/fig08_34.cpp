#include <iostream>
#include <cstring>

int main() {
   char sentence[] = "This is a sentence with 7 tokens";
   char *tokenPtr;

   std::cout << " The string to be tokenized is: " << '\n';
   std::cout << " " << sentence << '\n';
   std::cout << "\n The tokens are: \n" << '\n';

   tokenPtr = std::strtok(sentence, " ");
   while (tokenPtr != NULL) {
      std::cout << " " << tokenPtr << '\n';
      tokenPtr = std::strtok(NULL, " ");
   }

   std::cout << "\n After strtok, sentence = " << sentence << '\n';

   return 0;
}