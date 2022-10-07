#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Enter first no. : \n");
    scanf("%d", &a);
    printf("Enter seconnd no. : \n");
    scanf("%d", &b);
    printf("Enter third no. : \n");
    scanf("%d", &c);

    if(a > b && a > c){
        printf("\n%d is the largest number", a);
    }
    else if(b > a && b > c){
        printf("%d is the largest number ", b);
    }
    else{
        printf("%d is the largest number", c);
    }
    if(a < b && a < c){
        printf("\n%d is the smallest number", a);
    }
    else if(b < a && b < c){
        printf("\n%d is the smallest number ", b);
    }
    else{
        printf("\n%d is the smallest number", c);
    }
}
