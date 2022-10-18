#include<stdio.h>
int main()
{
    float principle,rate,time,CI;
    printf("Enter the principle:");
    scanf("%f",&principle);
    printf("Enter the rate:");
    scanf("%f",&rate);
    printf("Enter the time:");
    scanf("%f",&time);
    CI=principle*(pow((1+rate/100.00),time));
    printf("The compound interest=%0.2f",CI);
    return 0;
}