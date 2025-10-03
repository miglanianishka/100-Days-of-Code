//Q30: Write a program to reverse a given number.
#include<stdio.h>
int main (){
    int n,rn=0,rem;

    printf("Enter a number: ");
    scanf("%d", &n);

while( n!= 0){
    rem = n % 10;
    rn = rn * 10 + rem;
    n = n/10;
}
  printf("Reversed number: %d\n", rn);
  return 0;
}

