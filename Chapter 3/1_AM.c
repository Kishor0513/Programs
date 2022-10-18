#include<stdio.h>
int main()
{
    int num[10],AM,sum=0;
    printf("Enter 10 number:");
    for(int i=0; i<10 ; i++)
    {
    scanf("%d",&num[i]);
    }  
    for(int i; i<10 ;i++)
    {
    sum=sum+num[i];
    }
    AM=sum/10;
    printf("Arithemetic mean=%d",AM);
    return 0;
}