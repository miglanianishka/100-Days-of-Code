//Q8: Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main (){
    int n;
    printf(" enter the value of n: ");
    scanf("%d", &n);
    int sum = (n * (n + 1)) / 2;

    printf(" the sum of first %d natural number is %d", n, sum);

    return 0;

}