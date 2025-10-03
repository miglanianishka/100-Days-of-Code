//Q36: Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main(){
    int a,b,x;
    printf("Enter two numbers: ");
    scanf("%d %d ", &a , &b);

    if (a > b){
        x = a;
        a = b;
        b = x;
    }
    while ( b != 0){
        x = b;
        b = a % b;
        a = x;
    }

    printf("The HCF of the two numbers is :  %d\n",a);
    return 0;
}