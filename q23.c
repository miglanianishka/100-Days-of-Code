/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/
#include<stdio.h>
int main (){
    int d;
    float f=0.0;
    printf("enter the no of late days: ");
    scanf("%d",&d);


    if(d<=5){
        f = d*2.0;
        printf("Fine=%f",f);
    }
    else if ( d<=10){
         f = (5*2) + (d-5) *4;
         printf("Fine=%f",f);
    }
    else if (d<=20){
        f =  (5*2) + (d-10) * 6;
        printf("Fine=%f",f);
    }
    else if(d>=30){
        printf("Membership is cancelled.");
    }
    return 0;
}
