#include<stdio.h>
 float SI();

 int main()
 {
     //float interest=SI();
     printf("The interest amount is %.3f",SI());
     return 0;
 }

 float SI()
 {
     float p,t,r;
     printf("Enter Principal: ");
     scanf("%f",&p);
     printf("Enter Time: ");
     scanf("%f",&t);
     printf("Enter Rate: ");
     scanf("%f",&r);
     float simInt=(p*t*r)/100;
     return (simInt);

     //return(p*t*r/100);  //nameless variable
 }
