#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[1][2] = {{1,2}};

    for(int i = 0; i<1; i++){
        for(int j = 0; j<2; j++){
            printf("%d", arr[i][j] );
        }
    }
}
