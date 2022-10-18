#include <stdio.h>
void sum(int a, int b)
{
    int s = a + b;
    printf("The Sum of Two number is %d", s);
}
int main()
{
    int a, b;
    printf("Enter the First number:");
    scanf("%d", &a);
    printf("Enter the Second number:");
    scanf("%d", &b);
    sum(a, b);
}