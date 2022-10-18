#include<stdio.h>
int main()
{
    float principle,rate,time,SI;
    printf("Enter Principle: ");
    scanf("%f",&principle);
    printf("Enter rate: ");
    scanf("%f",&rate);
    printf("Enter time: ");
    scanf("%f",&time);
    SI=(principle*rate*time)/100;
    printf("The simple interest =%f",SI);
    return 0;
}