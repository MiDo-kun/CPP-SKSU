#include <cstring>
#include <iomanip>
#include <iostream>

int main() {
   // Error: ISO C++ forbids converting a string constant to 'char*'
   // - Changing to constant array
   char s1[] = "Happy New Year";
   char s2[] = "Happy New Year";
   char s3[] = "Happy Holidays";

   std::cout << " s1 = " << s1 << '\n';
   std::cout << " s2 = " << s2 << '\n';
   std::cout << " s3 = " << s3 << '\n';
   std::cout << '\n';

   std::cout << " strcmp(s1, s2) = " << std::setw(2) << std::strcmp(s1, s2) << '\n';
   std::cout << " strcmp(s1, s3) = " << std::setw(2) << std::strcmp(s1, s3) << '\n';
   std::cout << " strcmp(s3, s1) = " << std::setw(2) << std::strcmp(s3, s1) << '\n';
   std::cout << '\n';

   std::cout << " strncmp(s1, s3, 6) = " << std::setw(2) << strncmp(s1, s3, 6) << '\n';
   std::cout << " strncmp(s1, s3, 7) = " << std::setw(2) << strncmp(s1, s3, 7) << '\n';
   std::cout << " strncmp(s3, s1, 7) = " << std::setw(2) << strncmp(s1, s3, 7) << '\n';
   std::cout << '\n';

   return 0;
}