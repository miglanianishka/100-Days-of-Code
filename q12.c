//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main (){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);

    if( n>0)
        printf("the number is positive",n);
      
    else if(n<0)
        printf("the number is negative",n);

    else
    printf("the number is zero");

    return 0;
}
