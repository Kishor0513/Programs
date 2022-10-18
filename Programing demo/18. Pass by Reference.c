#include<stdio.h>
void swap (int *, int *);

int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("Values before swapping\n %d and %d\n", a,b);
    swap(&a, &b);


    printf("Values after swapping\n %d and %d\n", a,b);
}

void swap (int *x, int *y)
{
    int temp;
    temp= *x;
    *x=*y;
    *y=temp;
}

