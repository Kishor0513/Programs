#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], sum[3][3];
    printf("Enter the 1st matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d\t", &a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the 2nd matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d\t", &b[i][j]);
        }
        printf("\n");
    }
    printf("The 1st matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("The 2nd matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("The sum of two matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
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