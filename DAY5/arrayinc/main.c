#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int arr[10] = {1,2,3,4,5,6,7,8};
    for(i = 0; i<8; i++){
        printf("\n%d", arr[i]);
    }

    printf("\nWhile loop");
    i = 0;
    while(i<8){
        printf("\n%d", arr[i]);
        i++;
    }
}
