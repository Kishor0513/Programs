#include<stdio.h>
int main()
{
    char msg[]= "hello there";
    char *cp;
    cp=msg;
    cp[0]='H';
    *(msg+6)='T';
    printf("%s\n",msg);
    printf("%c\n",&msg[0]);
    printf("%s\n",cp);
    printf("%c\n",&cp[0]);
    return 0;
}
