#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0;
    printf("Enter your n value:");
    scanf("%d",&n);

    for(int i=1;i<=n;i=i+2)
    {
        printf("%d^3+",i);
        sum=sum+pow(1,3);
    }
    printf("%d",sum);
    return 0;
}