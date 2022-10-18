#include<stdio.h>

int main()
{
    FILE *fp;
    char c;
    fp=fopen("D:\\TBC\\ITP\\ITP-Lab Demos\\file1.txt","r");

    if(fp==NULL)
    {
        printf("File does not exist in the system");
        return;
    }

    while((c=fgetc(fp))!=EOF)
    {
        printf("%c",c);
    }
    fclose(fp);
    getch();
}
