#include<stdio.h>

char* get_name();

int main()
{
    //char* s;
    printf("Hello! %s.Nice to Meet You!"
           ,get_name());
    return 0;
}

char* get_name()
{
    char* name;
    printf("Hello!Enter your name");
    gets(name);
    return (name);
}

