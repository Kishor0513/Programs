#include <stdio.h>
int main()
{
    int b[4][4];

    printf("Enter the matrix:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d\t", &b[i][j]);
        }
        printf("\n");
    }

    printf("The matrix is:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("The Transpose of matrix is:\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", b[j][i]);
        }
        printf("\n");
    }

    return 0;
}