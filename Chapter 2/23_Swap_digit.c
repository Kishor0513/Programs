#include<stdio.h>
#include<math.h>
int main()
{
    int number,first,last,swap,digit,divide;
    printf("Enter the number:");
    scanf("%d",&number);

    digit=log10(number);

    divide=pow(10,digit);

    first=number / divide;

    number=number % divide;

    last=number % 10;

    number=number / 10;

    swap=last*divide+number*10+first;
    
    printf("Swap value is %d",swap);
    return 0;
}