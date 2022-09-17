#include <iostream>

int main() {
   char c;
   short s;
   int i;
   long l;
   float f;
   double d;
   long double ld;
   int array[20];
   int *ptr = array;

   std::cout << " sizeof c = " << sizeof c
             << "\t sizeof(char) = " << sizeof(char)
             << "\n sizeof s = " << sizeof s
             << "\t sizeof(short) = " << sizeof(short)
             << "\n sizeof i = " << sizeof i
             << "\t sizeof(int) = " << sizeof(int)
             << "\n sizeof l = " << sizeof(l)
             << "\t sizeof(long) = " << sizeof(long)
             << "\n sizeof f = " << sizeof f
             << "\t sizeof(float) = " << sizeof(float)
             << "\n sizeof d = " << sizeof d
             << "\t sizeof(double) = " << sizeof(double)
             << "\n sizeof ld = " << sizeof ld
             << "\t sizeof(long double) = " << sizeof(long double)
             << "\n sizeof array = " << sizeof array
             << "\n sizeof ptr = " << sizeof ptr << '\n';

   return 0;
}  