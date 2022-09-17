#include <iostream>

void copy1(char *s1, const char *s2) {
   for (int i = 0; (s1[i] = s2[i]) != '\0'; i++)
      ;
}

void copy2(char *s1, const char *s2) {
   for (; (*s1 = *s2) != '\0'; s1++, s2++)
      ;
}

int main() {
   char string1[10];
   char *string2 = "Hello";
   char string3[10];
   char string4[] = "Good Bye";

   copy1(string1, string2);
   std::cout << " string1 = " << string1 << '\n';

   copy2(string3, string4);
   std::cout << " string3 = " << string3 << '\n';

   return 0;
}