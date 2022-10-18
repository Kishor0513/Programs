#include<stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=i; j<5;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("1");
        }
        printf("\n");
    }
    return 0;
}
//     1
//    11
//   111
//  1111
// 11111