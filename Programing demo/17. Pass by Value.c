#include<stdio.h>
void swap (int, int);

int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("Values before swapping\n %d and %d\n", a,b);
    swap(a,b);
}

void swap (int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    //return (x, y);
    printf("Swapped Values\n");
    printf("%d and %d\n",x,y);
}
