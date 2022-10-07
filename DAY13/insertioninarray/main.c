#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[200], pos, n, i, x;

    printf("\nEnter no. of elements in array : ");
    scanf("%d", &n);

    printf("\nEnter %d elements :", n);

    for(i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    printf("\nEnter the element you want to insert :");
    scanf("%d", &x);

    printf("\nEnter the position :");
    scanf("%d", &pos);
    n++;
    for(i = n-1; i>= pos; i--){
        array[i] = array[i-1];
    }
    array[pos - 1] = x;
    printf("\nArray after insertion :");
    for(i = 0; i<n; i++){
        printf("%d\t", array[i]);
    }
    return 0;
}
