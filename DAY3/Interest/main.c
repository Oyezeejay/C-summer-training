#include <stdio.h>
#include <stdlib.h>
int main()
{
    float p, r, per, interest;
    printf("Enter the principle amount :");
    scanf("%f", &p);

    printf("Enter the rate of interest :\n");
    scanf("%f", &r);

    printf("Enter perfect amount :\n");
    scanf("%f", &per);

    while(p<per)
    {
        interest = (p * r)/100;
        p = interest + p;

        printf("\nTotal amount : %f", p);
    }

    printf("\nNearest amount : %f", p);
}
