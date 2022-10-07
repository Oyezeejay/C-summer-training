#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[200], n, i, x;
    int j=0;

    printf("\nEnter no. of elements in array : ");
    scanf("%d", &n);

    printf("\nEnter %d elements :", n);

    for(i=0; i<n; i++){
        scanf("%d", &array[i]);
    }

    printf("\nEnter the element you want to search :");
    scanf("%d", &x);

    printf("\nElement to be searched = %d", x);
   while(j < n){
      if( array[j] == x ) {
        break;
      }
      j = j + 1;
   }
   printf("\nElement \"%d\" is found at \'%d\' position", x, j+1);
}
