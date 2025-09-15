//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main (){
    int r;
    printf(" enter radius of circle");
    scanf("%d",&r);

    float area = 3.14*r*r;
    float circumference= 2*3.14*r;
    printf(" area of circle is %f\n", area,r);
    printf(" circumference of circle is %f\n", circumference,r);
    
    return 0;
}
