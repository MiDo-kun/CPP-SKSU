// This figure have an error;
// const must be initialized before using;
#include <iostream>

int main()
{
   const int x;
   x = 7;

   return 0;
}