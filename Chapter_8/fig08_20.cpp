#include <iostream>

int main() {
   int b[] = {10, 20, 30, 40};
   int *bPtr = b;

   std::cout << " Array b printed with: " << '\n';
   std::cout << "\n Array subsript notation " << '\n';

   for (int i = 0; i < 4; i++)
      std::cout << " b[" << i << "] = " << b[i] << '\n';

   std::cout << "\n Pointer/offset notation where the pointer is the array name " << '\n';
   for (int offset1 = 0; offset1 < 4; offset1++)
      std::cout << " *(b + " << offset1 << ") = " << *(b + offset1) << '\n';

   std::cout << "\n Pointer subscript notation " << '\n';
   for (int j = 0; j < 4; j++)
      std::cout << " bPtr[" << j << "] = " << bPtr[j] << '\n';

   std::cout << "\n Pointer subscript notation " << '\n';
   for (int offset2 = 0; offset2 < 4; offset2++)
      std::cout << " *(bPtr + " << offset2 << ") = " << *(bPtr + offset2) << '\n';

   return 0;
}