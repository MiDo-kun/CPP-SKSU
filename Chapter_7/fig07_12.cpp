#include <iostream>

int main()
{
   char string1[20];
   char string2[] = "string literal";

   std::cout << " Enter the string \"hello there\": ";
   std::cin >> string1;

   std::cout << " string1 is: " << string1 << "\n string2 is: " << string2;
   std::cout << "\n string1 with spaces between characters is:\n";

   std::cout << " ";
   for (int i = 0; string1[i] != '\0'; i++)
      std::cout << string1[i] << " ";

   std::cin >> string1;
   std::cout << "\n string1 is: " << string1 << std::endl;

   return 0;
}