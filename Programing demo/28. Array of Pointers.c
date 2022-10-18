#include<stdio.h>
int main()
{
    char *nameList[5];
    nameList[0]="First Name";
    nameList[1]="Second Name";
    nameList[2]="Third Name";
    nameList[3]="Fourth Name";
    nameList[4]="Fifth Name";
    printf("Displaying the contents of the array of pointer\n");
    for(int i=0; i<5; i++)
    {
        printf("%s\n",nameList[i]);
    }
    printf("Displaying the address of contents of the array of pointer\n");
    for(int i=0; i<5; i++)
    {
        printf("%d\n",&nameList[i]);
    }
}
