//Q38: Write a program to find the sum of digits of a number.
#include <stdio.h>
int main(){
   int num,sum=0,dig;
   printf("Enter a number: ");
   scanf("%d",&num);

   while (num !=0){
    dig = num % 10;
    sum += dig;
    num /= 10;
   }
   printf(" of the digits is : %d\n", sum);
   return 0;
}
