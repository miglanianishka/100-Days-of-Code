//Q16: Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main () {
    int a,b,c;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    printf("enter c: ");
    scanf("%d",&c);

if (a>=b && a>=c)
    printf(" a:%d is the largest number",a);

else if (b>=c && b>=a)
    printf(" b:%d is the largest number",b);

else if( c>=a && c>=b)
    printf(" c: %dis the largest number",c);

    return 0;
}
