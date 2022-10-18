#include<stdio.h>
int main()
{
    int n=1;
    for(int i=1; i<=5; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%d",n);
        }
        printf("\n");
    }
    return 0;
}
// 1
// 11
// 111
// 1111
// 11111