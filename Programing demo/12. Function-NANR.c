#include<stdio.h>
void display_name();

int main()
{
    display_name();
}

void display_name()
{
    char name[50];
    printf("Hello! Enter your name");
    gets(name);
    printf("Hello! %s. Nice to Meet You!",name);
}
