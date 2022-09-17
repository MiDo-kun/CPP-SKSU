#include <iomanip>
#include <iostream>

void swap(int* const element1Ptr, int* const element2Ptr) {
   int hold = *element1Ptr;
   *element1Ptr = *element2Ptr;
   *element2Ptr = hold;
}

void selectionSort(int* const array, const int size) {
   int smallest;
   for (int i = 0; i < size - 1; i++) {
      smallest = i;

      for (int index = i + 1; index < size; index++) {
         if (array[index] < array[smallest]) {
            smallest = index;
            swap(&array[i], &array[smallest]);
         }
      }
   }
}

int main() {
   const int arraySize = 10;
   int a[arraySize] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

   std::cout << " Data items in original order: " << '\n';
   for (int i = 0; i < arraySize; i++)
      std::cout << std::setw(4) << a[i];

   selectionSort(a, arraySize);
   std::cout << "\n Data items in ascending order \n";
   for (int j = 0; j < arraySize; j++)
      std::cout << std::setw(4) << a[j];

   return 0;
}