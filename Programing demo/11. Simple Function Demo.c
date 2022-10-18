#include<stdio.h>
#include<string.h>

void sayHello (char * name);  //formal arguments

int main()
{
    char userName[50];   //array of characters
    printf("Hello! Please enter your name");
    gets(userName);
    sayHello(userName);  //parameter
    return 0;
}

void sayHello(char * name)  //actual argument
{
    printf("Hello! %s.Nice to Meet You!",
           name);
}


