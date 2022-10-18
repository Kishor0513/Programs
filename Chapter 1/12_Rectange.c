#include<stdio.h>
int main()
{
    float lenght,width,area,circumference;
    printf("Enter the lenght and width of Rectange:");
    scanf("%f%f",&lenght,&width);
    area=lenght*width;
    circumference=2*(lenght+width);
    printf("Area of rectange=%0.4f\n",area);
    printf("Circumference of rectange=%0.4f",circumference);
    return 0;
}