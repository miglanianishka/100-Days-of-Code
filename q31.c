//Q31: Write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h>
int main (){
    int dn,bn=0,rem;

    printf("Enter a decimal number: ");
    scanf("%d", &dn);

    int i=1;
    while (dn!= 0) {
        rem = dn % 2; 
        dn /= 2;            
        bn += rem * i; 
        i *= 10;                    
    }    
    printf("Binary equivalent: %d", bn);
    return 0;
}

