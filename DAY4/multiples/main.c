#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Enter the number : ");
    scanf("%d", &i);

    for(int n = 1; n<11; n++){
        printf("\n%d", i*n);
    }
}
