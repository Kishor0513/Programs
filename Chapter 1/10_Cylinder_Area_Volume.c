#include<stdio.h>
int main()
{
    float radius,height,surface,volume;
    printf("Enter the radius and height of Cylinder\n");
    scanf("%f%f",&radius,&height);
    surface=2*3.14159*radius*(radius+height);
    printf("The surface area of Cylinder=%0.4f\n",surface);
    volume=3.14159*radius*radius*height;
    printf("The Volume of Cylinder=%0.4f\n",volume);
    return 0;
}       