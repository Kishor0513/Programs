#include <stdio.h>
int sum(int a, int b)
{
    int s = a + b;
    return (s);
}
int main()
{
    int num1, num2, add;
    printf("Enter the First Number:");
    scanf("%d", &num1);
    printf("Enter the Second Number:");
    scanf("%d", &num2);
    add = sum(num1, num2);
    printf("The Sum of Two Number is %d", add);

    return 0;
}