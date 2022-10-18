#include<stdio.h>
#include<conio.h>

int main()
{
    float n1,n2,n3,n4,n5,avg;
//    printf("enter 5 number");
//    scanf("%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5);
    printf("enter first number");
    scanf("%f",&n1);
    printf("enter second number");
    scanf("%f",&n2);
    printf("enter third number");
    scanf("%f",&n3);
    printf("enter fourth number");
    scanf("%f",&n4);
    printf("enter fifth number");
    scanf("%f",&n5);

    avg=(n1+n2+n3+n4+n5)/5;
    printf("the average is %15.2f",avg);
    return 0;

}
