#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    printf("displaying the elements of the array\n");
    for(int i=0; i<5; i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }

    int *p;
    p=a;
    printf("displaying the elements of the pointer- method I\n");
    for(int i=0; i<5; i++)
    {
        printf("p[%d] = %d\n",i,p[i]);
    }

    printf("displaying the elements of the pointer- method II\n");
    for(int i=0; i<5; i++)
    {
        printf("*(p+%d) = %d\n",i,*(p+i));
    }
}
