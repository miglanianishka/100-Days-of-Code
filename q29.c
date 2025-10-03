//Q29: Write a program to calculate the factorial of a number.
#include<stdio.h>
int main (){
    int num, fact=1;

printf(" enter a number: ");
scanf("%d",&num); 

if ( num<0)
    printf(" factorial is invalid\n");
else if(num == 0)
     printf (" the factorial is 0\n");
else {
    for( int i = 1; i<=num; i++){
        fact *= i;
    } 
   printf(" the factorial of %d is %d \n", num, fact); 
}         
 return 0; 
}
