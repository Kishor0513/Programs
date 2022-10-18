#include <stdio.h>
int main()
{
    int a, n;
    int power = 1;
    printf("Enter the base:");
    scanf("%d", &a);
    printf("Enter its power:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        power = power * n;
    }

    printf("%d ^ %d =%d ", a, n, power);
    return 0;
}