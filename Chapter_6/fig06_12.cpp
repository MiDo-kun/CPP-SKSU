#include <iostream>

void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

int x = 1;

int main()
{

   int x = 5;
   std::cout << " local x main scope outer scope is " << x << std::endl;
   {
      int x = 7;
      std::cout << " local x main inner scope is " << x << std::endl;
   }

   std::cout << " Local x in main's outer scope is " << x << std::endl;

   useLocal();
   useStaticLocal();
   useGlobal();
   useLocal();
   useStaticLocal();
   useGlobal();

   std::cout << "\n local x in main is " << x << std::endl;

   return 0;
}

void useLocal(void)
{
   int x = 25;

   std::cout << "\n local x is " << x << " on entering useLocal " << std::endl;
   x++;
   std::cout << " local x is " << x << " on editing useLocal " << std::endl;
}

void useStaticLocal(void)
{
   static int x = 50;

   std::cout << "\n local static x is " << x << " on entering useStaticLocal" << std::endl;
   x++;
   std::cout << " local static x is " << x << " on existing useStaticLocal " << std::endl;
}

void useGlobal(void)
{
   std::cout << "\n global x is " << x << " on entering useGlobal " << std::endl;
   x *= 10;
   std::cout << " global x is " << x << " on existing useGlobal " << std::endl;
}