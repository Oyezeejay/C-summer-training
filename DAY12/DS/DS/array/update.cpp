#include <stdio.h>  
  
int main() {  
   char arr[] = {'a', 'b', 'c', 'd', 'e'};
   char item = 'd';
   int i, pos = 3;  
     
   printf("Given array elements are :\n");  
      
   for(i = 0; i<5; i++) {  
      printf("arr[%d] = %c,  ", i, arr[i]);  
   }  
//char item;      
arr[pos-1] = item;    
   printf("\nArray elements after updation :\n");  
      
   for(i = 0; i<5; i++) {  
      printf("arr[%d] = %c,  ", i, arr[i]);  
   }  
}  
