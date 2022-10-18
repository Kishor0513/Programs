#include<stdio.h>
int main()
{
    char name[20]= "Tony Stark";
    char *p, *q;
    p=name;
    //char *q;
    q=p;

    while(*p != '\0')
        p++;

    int diff=p-q;
    p--;

    printf("Length of the string = %d \n", diff);
    printf("The string in reverse order = ");
    while(diff>=0)
    {
        putchar(*p);
        diff--;
        p--;
    }
}
