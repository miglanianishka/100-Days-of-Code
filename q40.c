//Q40: Write a program to find the 1’s complement of a binary number and print it .
#include <stdio.h>
int main() {
    char bin; 
    printf("Enter a binary number : ");
   
    while ((bin= getchar()) != '\n') {
        if (bin == '0') {
            printf("1"); 
        } else if (bin == '1') {
            printf("0"); 
        }
     }
    printf("\n"); 
    return 0;
    }