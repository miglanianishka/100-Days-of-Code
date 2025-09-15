//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main (){
int a,b;
printf("enter a number,a: ");
scanf("%d",&a);
printf("enter a number,b: ");
scanf("%d",&b);

int sum = a +b;
int difference = a-b;
int product=a*b;
int quotient = a/b;
printf("sum of a and b is %d\n", sum, a,b);
printf("difference of a and b is %d\n", difference, a,b);
printf("product of a and b is %d\n", product, a,b);
printf("quotient of a by b is %d\n", quotient, a,b);
return 0;
}
