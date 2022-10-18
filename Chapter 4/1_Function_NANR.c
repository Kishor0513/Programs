#include <stdio.h>
void Sum()
{
    int num1, num2, sum;
    printf("Enter the First Number:");
    scanf("%d", &num1);
    printf("Enter the Second Number:");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("The Sum of Two Number is %d", sum);
}

int main()
{
    Sum();
    return 0;
}