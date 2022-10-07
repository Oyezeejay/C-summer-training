#include <stdio.h>  
int main()  
{  
    int arr[20] = { 1, 2, 3, 4, 5 };  
    int i, x, pos, n = 5;  
    printf("Array elements before insertion\n");  
    for (i = 0; i < n; i++)  
        printf("%d ", arr[i]);  
    printf("\n");  
  
    x = 20; // element to be inserted..  
    pos = 4;  // index where to add..
    n++;  
  
    for (i = n-1; i >= pos; i--)  
        arr[i] = arr[i - 1];  
    arr[pos - 1] = x;  
    printf("Array elements after insertion\n");  
    for (i = 0; i < n; i++)  
        printf("%d ", arr[i]);  
    printf("\n");  
    return 0;  
}
