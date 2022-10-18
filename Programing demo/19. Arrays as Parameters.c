#include<stdio.h>

void displayArray(int a[]);
void displayPointer(int * a);

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    displayArray(a);
    printf("...\n");
    displayPointer(a);
}

void displayArray(int b[])
{
    printf("Printing with array index\n");
    for (int i=0;i<10; i++)
    {
        printf("%d \n",b[i]);
    }
}

void displayPointer(int * z)
{
    printf("Printing with pointer index\n");
    for (int i=0;i<10; i++)
    {
        printf("%d \n",z[i]+5);
    }
}
