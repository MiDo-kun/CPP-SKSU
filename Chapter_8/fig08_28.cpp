#include <iomanip>
#include <iostream>

void selectionSort(int[], const int, bool (*)(int, int));
void swapElements(int* const, int* const);
bool ascending(int, int);
bool descending(int, int);

int main() {
   const int arraySize = 10;
   int order = 0;
   int counter = 0;
   int a[arraySize] = {2, 6, 4, 8, 10, 12, 89, 678, 45, 37};

   std::cout << " Enter 1 to sort in ascending order " << '\n';
   std::cout << " Enter 2 to sort in descending order " << '\n';
   std::cout << " Enter Option: ";
   std::cin >> order;

   std::cout << "\n Data items in original order " << '\n';
   for (counter = 0; counter < arraySize; counter++)
      std::cout << std::setw(4) << a[counter];

   if (order == 1) {
      selectionSort(a, arraySize, ascending);
      std::cout << "\n Data items in ascending order " << '\n';
   } else {
      selectionSort(a, arraySize, descending);
      std::cout << "\n Data items in descending order \n";
   }

   for (counter = 0; counter < arraySize; counter++)
      std::cout << std::setw(4) << a[counter];
   std::cout << '\n';

   return 0;
}

void selectionSort(int work[], const int size, bool (*compare)(int, int)) {
   int smallestOrLargest = 0;
   for (int i = 0; i < size - 1; i++) {
      smallestOrLargest = i;
      for (int index = i + 1; index < size; index++)
         if (!(*compare)(work[smallestOrLargest], work[index]))
            smallestOrLargest = index;

      swapElements(&work[i], &work[smallestOrLargest]);
   }
}

void swapElements(int* const element1Ptr, int* const element2Ptr) {
   int hold = *element1Ptr;
   *element1Ptr = *element2Ptr;
   *element2Ptr = hold;
}

bool ascending(int a, int b) {
   return a < b;
}

bool descending(int a, int b) {
   return a > b;
}