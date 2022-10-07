#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i = 0; i<100; i++){
        if( i>=58){
            break;
        }
    printf("%d\n", i);

    }
    printf("\nCONTINUE\n");
    for(i = 10; i<100; i++){
        if (i == 60){
            continue;
        }
    printf("%d\n", i);
    }
}

