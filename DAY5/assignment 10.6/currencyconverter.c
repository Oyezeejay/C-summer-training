#include<stdio.h>
#include <stdlib.h>
int main()
{
    float inr;
    printf("Enter the amount in INR:");
    scanf("%f",&inr);
    float usd=inr*0.013;
    printf("\nEntered amount in US Dollars: %.2f",usd);
    float euro=inr*0.012;
    printf("\nEntered amount in Euros: %.2f",euro);
    float pound=inr*0.010;
    printf("\nEntered amount in British Pounds: %.2f",pound);
    float yen=inr*1.7100;
    printf("\nEntered amount in Japanese Yen: %.2f",yen);
    float yuan=inr*0.086;
    printf("\nEntered amount in Chinese Yuan: %.2f",yuan);
    float aus=inr*0.018;
    printf("\nEntered amount in Australian Dollar: %.2f",aus);
    float can=inr*0.016;
    printf("\nEntered amount in Canadian Dollar: %.2f",can);
    float hongkong=inr*0.100458;
    printf("\nEntered amount in Hongkong Dollar: %.2f",hongkong);
    float swiss=inr*0.012642;
    printf("\nEntered amount in Swiss Franc: %.2f",swiss);
    float sri=inr*4.6204;
    printf("\nEntered amount in Sri Lankan Rupee: %.2f",sri);
    float ruble=inr*0.74;
    printf("\nEntered amount in Russian Ruble: %.2f",ruble);
    float riyal=inr*0.047;
    printf("\nEntered amount Saudi Arabian Riyal: %.2f",riyal);
    float won=inr*16.37;
    printf("\nEntered amount in South Korean Won: %.2f",won);
    float krona=inr*0.127566;
    printf("\nEntered amount in Swedish Krona: %.2f",krona);
    float krone=inr*0.0904;
    printf("\nEntered amount in Danish Krone: %.2f",krone);
    float koruna=inr*0.30;
    printf("\nEntered amount in Czech Koruna: %.2f",koruna);
    float apeso=inr*1.558;
    printf("\nEntered amount in Argentine Peso: %.2f",apeso);
    float lev=inr*0.023;
    printf("\nEntered amount in Bulgarian Lev: %.2f",lev);
    float kuna=inr*0.091;
    printf("\nEntered amount in Crotian kuna: %.2f",kuna);
    float peso=inr*0.255;
    printf("\nEntered amount in Mexican Peso: %.2f",peso);

    return 0;
}