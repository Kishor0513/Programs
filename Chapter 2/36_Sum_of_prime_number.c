#include <stdio.h>
int main()
{
    int a, b, i, num, sum = 0, count;
    printf("Enter the number range\n");
    printf("Enter a First number: ");
    scanf("%d", &a);
    printf("Enter the Second number:");
    scanf("%d", &b);

    for (num = a; num <= b; num++)
    {

        count = 0;

        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                count++;
                break;
            }
        }

        if (count == 0 && num != 1)
            sum = sum + num;
    }

    printf("Sum of prime numbers between %d-%d is: %d ", a, b, sum);

    return 0;
}