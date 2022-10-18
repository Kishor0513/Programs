#include<stdio.h>
#include<string.h>

struct bioData
{
    char initial;
    char gender;
    int age;
} kids[10], *KP;


int main()
{
    //initializing the values in the array of structures
    for (int i=0; i<10; i++)
    {
        KP=kids+i;  //pointer to individual structure element.
        KP->initial='A' + i;
        if (i%2==0)
            KP->gender='M';
        else
            KP->gender='F';
        KP->age=4+i;
    }

    kids[2].age=kids[4].age=kids[6].age=kids[8].age=14;
    kids[1].initial=kids[3].initial=kids[5].initial=kids[7].initial='Z';

    //displaying the results in the array of structures
    for (int i=0; i<10; i++)
    {
        printf("Kid's initial is %c, gender is %c, age is %d\n",
               kids[i].initial, kids[i].gender, kids[i].age);
    }
}



