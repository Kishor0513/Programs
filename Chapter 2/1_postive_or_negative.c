#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if (num>0)
    {
        printf("%d is positive number");
    }
    if (num<0)
    {
        printf("%d is negative number");
    }
    if (num=0)
    {
      printf("%d is zero");
    }
    return 0;
}
