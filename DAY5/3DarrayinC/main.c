#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    int arr[10][10][10] = {     {{1,2},{3,4},{5,6}},
                                {{7,8},{9,10},{11,12}},
                                {{13,14},{15,16},{17,18}}
                            };

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            for(k=0; k<2; k++){
                printf("\t%d", arr[i][j][k]);
            }
        }
    }

}
