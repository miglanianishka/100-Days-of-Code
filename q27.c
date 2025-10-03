//Q27: Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main (){
    int n;
    printf ("Enter the number of odd terms: ");
    scanf("%d",&n);

int i,sum=0,odd;
    for (i = 0; i < n ; i++);{
        odd = 2*i+1;
        sum += odd;}
    printf("The sum of first  %d odd numbers is: %d\n", n,sum);

return 0;     
}
