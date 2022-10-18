#include<stdio.h>
#include<string.h>

struct bioData
{
    char initial;
    char gender;
    int age;
} kids[10];

int main()
{

    //initializing the values in the array of structures
    for (int i=0; i<10; i++)
    {
        kids[i].initial='A' + i;
        if (i%2==0)
            kids[i].gender='M';
        else
            kids[i].gender='F';
        kids[i].age=4+i;
    }

    //displaying the results in the array of structures
    for (int i=0; i<10; i++)
    {
        printf("Kid's initial is %c, gender is %c,age is %d\n",
               kids[i].initial, kids[i].gender,
               kids[i].age);
    }
}

