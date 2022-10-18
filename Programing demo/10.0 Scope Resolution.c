#include<stdio.h>
int main()
{
    int m;
    m=5;
    printf("%d",m);
    {
        m=6;
        printf("%d\n",m);
    }
    m=5;
    printf("%d",m);
}


