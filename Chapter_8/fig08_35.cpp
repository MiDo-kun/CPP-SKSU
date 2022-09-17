#include <iostream>
#include <cstring>

int main() {
   // Error: ISO C++ forbids converting a string constant to 'char*'
   // - Changing to constant array
   char string1[] = "abcdefghijklmnopqrstuvwxyz";
   char string2[] = "four";
   char string3[] = "Boston";

   std::cout << " The length of \"" << string1 << "\" is " << std::strlen(string1) << '\n';
   std::cout << " The length of \"" << string2 << "\" is " << std::strlen(string2) << '\n';
   std::cout << " The length of \"" << string3 << "\" is " << std::strlen(string3) << '\n';

   return 0;
}