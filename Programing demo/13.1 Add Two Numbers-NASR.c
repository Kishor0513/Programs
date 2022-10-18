#include<stdio.h>

void displaySum(int a , int b);

int main ()
{
    int x,y;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    displaySum(x,y);
    return 0;
}

void displaySum(int a, int b)
{
    int sum= a+b;
    printf("The sum is = %d\n", sum);
}
