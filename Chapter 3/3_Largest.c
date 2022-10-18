#include <stdio.h>
void func(int largest);
int main()
{
    int num[10];
    int i;
    printf("Enter the 10 number:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    largest(num[i]);
    printf("The largest number is:%d", largest);
    return 0;
}
void func(int largest)
    int i;
    largest = 0;
    largest = num[0];
for (int  i = 1; i < 10; i++)
{
    if (largest < num[i])
    {
        largest = num[i];
    }
}