#include<stdio.h>
int main()
{
    for(int i=5; i>=1; i--)
    {
        for(int j=5; j>=i; j--)
        {
            printf(" ");
        }
        for(int k=1; k<=i; k++)
        {
            printf("%d",2*i-1);
        }
        printf("\n");
    }
    return 0;
}
// 99999
//  7777
//   555
//    33
//     1