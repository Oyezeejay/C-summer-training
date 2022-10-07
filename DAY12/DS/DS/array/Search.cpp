#include <stdio.h>  
  
int main() {  
   char arr[] = {'a', 'b', 'c', 'd', 'e'};  
   char item = 'a';
   int i, j = 0;  
     
   printf("Given array elements are :\n");  
      
   for(i = 0; i<5; i++) {  
      printf("arr[%c] = %c,  ", i, arr[i]);  
   }  
    printf("\nElement to be searched = %c", item);  
   while( j < 5){  
      if( arr[j] == item ) {  
         break;  
      }  
          
      j = j + 1;  
   }  
      
   printf("\nElement \"%c\" is found at \'%d\' position", item, j+1);  
}  
