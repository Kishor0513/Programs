#include <stdio.h>
int main()
{
    int a[3][2], b[3][2], sum[3][2];
    printf("Enter the 1st matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d\t", &a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the 2nd matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d\t", &b[i][j]);
        }
        printf("\n");
    }
    printf("The 1st matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("The 2nd matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("The sum of two matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}