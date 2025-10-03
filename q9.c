//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>
int main() {
    float p, r,t;
    printf(" enter the princpal amount: ");
    scanf("%f",&p);
     printf(" enter the rate of interest: ");
    scanf("%f",&r);
     printf(" enter the amount of time: ");
    scanf("%f",&t);

    float si= (p*r*t)/100;
    float ci= p*( pow ((1 + r/100), t) - 1);
    
    printf(" the simple interest is %f\n",si,p,r,t);
    printf(" the compound interest is %f\n",ci,p,r,t);

return 0;
}
