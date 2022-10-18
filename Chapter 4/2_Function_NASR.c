#include <stdio.h>
int sum()
{
    int num1, num2, sum;
    printf("Enter the First Number:");
    scanf("%d", &num1);
    printf("Enter the Second Number:");
    scanf("%d", &num2);
    sum = num1 + num2;
    return (sum);
}
int main()
{
    int s=sum();
    printf("The Sum of Two Number is %d", s);
    return 0;
}