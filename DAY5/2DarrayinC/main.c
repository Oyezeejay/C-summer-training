#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10] = {{1,2,3,4,5,6},{7,8,9,10,11,12}};
    for(int i = 0; i<2; i++){
        for(int j = 0; j<6; j++){
            printf("\n%d", a[i][j]);
        }
    }
    printf("\nWhileLOOP!!!\n");
    int i=0;
    while(i<2){
        int j =0;
        while(j<6){
        printf("\n%d", a[i][j]);
        j++;
        }
    i++;
    }
}
