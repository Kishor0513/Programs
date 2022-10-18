#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three sides of triangele:");
    scanf("%d%d%d",&a,&b,&c);
    if (a!=b && b!=c && c!=a)
    printf("Scalene Triangle");
    else if (a==b && b==c )
    printf("Equilateral Triangle");
    else 
    printf("Isoscales Triangle");
    return 0;
}