#include<stdio.h>
void display_name(char * s);

int main()
{
    char name[50];
    printf("Hello! Enter your name");
    gets(name);
    display_name(name);
}

void display_name(char * s)
{
    printf("Hello! %s. Nice to Meet You!",s);
}

