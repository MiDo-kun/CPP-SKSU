#include <iostream>

int main()
{
   for (int count = 1; count <= 10; count++)
   {
      if (count == 5)
         continue;

      std::cout << " " << count << " ";
   }

   std::cout << "\n Used continue to skip printing 5 " << std::endl;
   return 0;
}