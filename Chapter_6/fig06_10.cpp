#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main()
{

   unsigned seed;

   // std::cout << " Enter seed: ";
   // std::cin >> seed;

   srand(time(0));

   for (int counter = 1; counter <= 10; counter++)
   {
      std::cout << std::setw(10) << (1 + rand() % 6);

      // 5 / 5 = 0
      if (counter % 5 == 0)
         std::cout << std::endl;
   }

   return 0;
}