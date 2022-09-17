#include <iostream>
#include <cstring>

int main() {
   char s1[20] = "Happy ";
   char s2[]= "New Year";
   char s3[40] = "";

   std::cout << " s1 = " << s1 << '\n';
   std::cout << " s2 = " << s2 << '\n';

   std::strcat(s1, s2);
   
   std::cout << "\n After strcat(s1, s2): " << '\n';
   std::cout << " s1 = " << s1 << '\n';
   std::cout << " s2 = " << s2 << '\n';

   std::strncat(s3, s1, 6);
   std::cout << "\n After stncat(s3, s1,6): " << '\n';
   std::cout << " s3 = " << s3 << '\n';
   std::cout << " s1 = " << s1 << '\n';

   std::strcat(s3, s1);
   std::cout << "\n Water strcat(s3, s1): " << '\n';
   std::cout << " s1 = " << s1 << '\n';
   std::cout << " s3 = " << s3 << '\n';

   return 0;
}