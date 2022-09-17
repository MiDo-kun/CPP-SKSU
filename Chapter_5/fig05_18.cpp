#include <iostream>

int main()
{

   std::cout << std::boolalpha << " Locigal AND (&&)"
             << "\n false && false = " << (false && false)
             << "\n false && true = " << (false && true)
             << "\n true && false = " << (true && false)
             << "\n true && true = " << (true && true) << "\n \n";

   std::cout << " Logical OR (||)"
             << "\n false || false = " << (false || false)
             << "\n false || true = " << (false || true)
             << "\n true || false = " << (true || false)
             << "\n true || true = " << (true || true) << "\n \n";

   std::cout << " Logical NOT (!)"
             << "\n !false = " << (!false)
             << "\n !true = " << (!true) << std::endl;

   return 0;
}