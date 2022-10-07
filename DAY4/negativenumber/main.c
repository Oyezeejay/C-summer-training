#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sum;
    while(2){
        printf("Enter your number : ");
        scanf("%d", &i);
        sum = +i;
        if(i<=0){
            printf("You entered negative number!!!!!");
            break;
            }
        }
        printf("%d", sum);
        return 0;
}
