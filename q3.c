//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main (){
    int l, b , perimeter, area;
     printf( "enter value for length, l");
     scanf("%d",&l);

     printf ( " enter value for breadth , b");
     scanf(" %d", &b);

     perimeter=2*(l+b);
     printf (" perimeter of rectangle is %d",perimeter, l,b);

     area = l*b;
     printf( " area of rectangle is %d", area, l,b);

     return 0;
     
}