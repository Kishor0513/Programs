#include<stdio.h>
int main()
{
    int lower,upper;
    printf("Enter lower number:");
    scanf("%d",&lower);
    printf("Enter higer number:");
    scanf("%d",&upper);

    for (int i=lower; i<=upper; i++)
    {
        if (i%13==0)
        printf("%d\n",i);
    }
    return 0;
}