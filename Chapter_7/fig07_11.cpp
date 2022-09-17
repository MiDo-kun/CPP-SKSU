#include <iostream>
#include <iomanip>

int main()
{
   const int responseSize = 40;
   const int frequencySize = 11;

   const int responses[responseSize] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6,
                                        3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6,
                                        8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4,
                                        8, 6, 8, 10};
   int frequency[frequencySize] = {0};

   for (int answer = 0; answer < responseSize; answer++)
   {
      frequency[responses[answer]]++;
   }

   std::cout << " Rating" << std::setw(17) << " Frequency" << std::endl;

   for (int rating = 1; rating < frequencySize; rating++)
   {
      std::cout << std::setw(6) << rating << std::setw(17) << frequency[rating] << std::endl;
   }

   return 0;
}