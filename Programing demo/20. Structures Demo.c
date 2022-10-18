#include<stdio.h>
#include<string.h>

struct bioData
{
    char name[50];
    char gender;
    int age;
};

int main()
{
    int a , b , c;
    struct bioData person1, person2;
    //person1.name[0]="Ram";
    strcpy(person1.name,"Ram");
    person1.gender='M';
    person1.age=57;

    strcpy(person2.name,"Sita");
    person2.gender='F';
    person2.age=57;

    //displaying information
    printf("First Person Bio Data\n");
    printf("Name= %s \n",person1.name);
    printf("Gender= %c \n", person1.gender);
    printf("Age= %d \n",person1.age);

    printf("Second Person Bio Data\n");
    printf("Name= %s \n",person2.name);
    printf("Gender= %c \n", person2.gender);
    printf("Age= %d\n",person2.age);
}


