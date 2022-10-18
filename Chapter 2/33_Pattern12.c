#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 5 - i; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
//     1
//    12
//   123
//  1234
// 12345
//  1234
//   123
//    12
//     1