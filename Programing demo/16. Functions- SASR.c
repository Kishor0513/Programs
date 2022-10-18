#include<stdio.h>
 float SI(float, float, float);

 int main()
 {
     float p,t,r;
     printf("Enter Principal: ");
     scanf("%f",&p);
     printf("Enter Time: ");
     scanf("%f",&t);
     printf("Enter Rate: ");
     scanf("%f",&r);

     float interest=SI(p,t,r);
     printf("The interest amount is %.2f",interest);
     return 0;
 }

 float SI(float pp, float tt, float rr)
 {
     //pp= pp +100;
     return(pp*tt*rr/100);
 }

