#include<stdio.h>
#include<math.h>
int main()
{
    float num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,AM,GM,sum,prod;
    printf("Enter first number: ");
    scanf("%f",&num1);
    printf("Enter second number: ");
    scanf("%f",&num2);
    printf("Enter third number: ");
    scanf("%f",&num3);
    printf("Enter fourth number: ");
    scanf("%f",&num4);
    printf("Enter fifth number: ");
    scanf("%f",&num5);
    printf("Enter sixth number: ");
    scanf("%f",&num6);
    printf("Enter seventh number: ");
    scanf("%f",&num7);
    printf("Enter eighth number: ");
    scanf("%f",&num8);
    printf("Enter ninth number: ");
    scanf("%f",&num9);
    printf("Enter tenth number: ");
    scanf("%f",&num10);
    sum=num1+num2+num3+num4+num5+num6+num7+num8+num9+num10;
    AM=sum/10.00;
    prod=num1*num2*num3*num4*num5*num6*num7*num8*num9*num10;
    GM=pow(prod,1/10.00);
    printf("Am=%f\n",AM);
    printf("Gm=%f\n",GM);
    return 0;
}