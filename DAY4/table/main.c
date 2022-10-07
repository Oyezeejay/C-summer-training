#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=0; i<6; i++){
        for(int j=0; j<4; j++){
            printf("%d\t|\t", i);
        }
        printf("\n");
    }
    return 0;
}
