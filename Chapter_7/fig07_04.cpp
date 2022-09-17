#include <iostream>
#include <iomanip>

int main()
{
   int n[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};

   std::cout << " Element " << std::setw(13) << " Value " << std::endl;

   for (int i = 0; i < 10; i++)
   {
      std::cout << std::setw(7) << i << std::setw(13) << n[i] << std::endl;
   }

   return 0;
}