#include <iostream>
#include <cstring>

int main() {
   char x[] = "Happy Birthday to You";
   char y[25];
   char z[15];

   std::strcpy(y, x);

   std::cout << " The string in array x is " << x << '\n';
   std::cout << " The string in array y is " << y << '\n';

   std::strncpy(z, x, 14);
   z[14] = '\0';

   std::cout << " The string in array z is " << z << '\n';

   return 0;
}