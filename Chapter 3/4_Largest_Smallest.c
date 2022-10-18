#include <stdio.h>
int main()
{
    int num[10], largest = 0, smallest = 0;
    printf("Enter the 10 number:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    largest = num[0];
    for (int i = 1; i < 10; i++)
    {
        if (largest < num[i])
        {
            largest = num[i];
        }
    }
    smallest = num[0];
    for (int i = 1; i < 10; i++)
    {
        if (smallest > num[i])
        {
            smallest = num[i];
        }
    }
    printf("The largest number is:%d and smallest number is:%d", largest, smallest);
    return 0;
}