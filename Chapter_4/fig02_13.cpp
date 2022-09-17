//Fig 2.13 
#include <iostream> 

 int main() {
    
    int number_1, number_2;

    std::cout << "Enter two integers to compare : ";
    std::cin  >> number_1 >> number_2;

    if (number_1 == number_2) 
         std::cout << number_1 << "==" << number_2 << std::endl;

    if (number_1 != number_2)
        std::cout << number_1 << " != " << number_2 << std::endl;

    if (number_1 > number_2)
        std::cout << number_1 << " > " << number_2 << std::endl;

    if (number_1 < number_2) 
        std::cout << number_1 << " < " << number_2 << std::endl;

    return 0; 

 }