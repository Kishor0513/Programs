#include<stdio.h>
#include<math.h>
int main()
{
    double num,root;
    printf("Enter a number:\n");
    scanf("%lf",&num);
    root=sqrt(num);
    printf("Square root of %0.2lf=%0.2lf",num,root);
    return 0;
}