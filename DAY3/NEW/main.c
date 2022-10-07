#include <stdio.h>
#include <stdlib.h>
#include "head.h"
int main()
{
    float i, dollar, euro, aed, sar, aud;
    printf("Enter INDIAN Rupee : ");
    scanf("%f", &i);

    dollar = (float)i/80;
    printf("DOLLAR : %f \n", dollar);

    euro = (float)i/88;
    printf("EURO : %f\n", euro);

    aed = (float)i/21;
    printf("AED : %f\n", aed);

    sar = (float)i/21;
    printf("SAR : %f\n", sar);

    aud = (float)i/56;
    printf("AUD : %f\n", aud);
    return 0;
}
