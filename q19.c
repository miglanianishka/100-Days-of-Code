//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main (){
int a,b,c;

printf("enter the side of the triangle a: ");
scanf("%d",&a);
printf("enter the side of the triangle b: ");
scanf("%d",&b);
printf("enter the side of the triangle c: ");
scanf("%d",&c);

if(a==b && b==c && a==c)
printf("triangle is equilateral\n");

else if(a==b||b==c||a==c)
printf("triangle is isosceles\n");

else if(a!=b && b!=c && c!=a)
printf("triangle is scalene\n");

return 0;
}
