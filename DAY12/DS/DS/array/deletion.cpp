#include <stdio.h>

int main() {
   int arr[] = {'a','b','c','d','e'};
   int n = 5;
   char k = 'e';
   int i, j;

   printf("Given array elements are :\n");

   for(i = 0; i<n; i++) {
      printf("arr[%d] = %c\t  ", i, arr[i]);
   }

   j = k; //to check the element

   while( j < n) {
      arr[j-1] = arr[j];
      j = j + 1;
   }

   n = n - 1; //deletes last element

   printf("\nElements of array after deletion:\n");

   for(i = 0; i<n; i++) {
      printf("arr[%d] = %c\t  ", i, arr[i]);
   }
}
