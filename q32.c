//Q32: Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int num, rn = 0, rem,x;
    printf("Enter a number: ");
    scanf("%d", &num);
    x=num;
    while (num != 0) {
        rem = num % 10;          
        rn = rn * 10 + rem; 
        num = num / 10;}              

    if ( rn == x){
        printf(" the number is a palindrome number", x);}
    else {
        printf(" the number is not a palindrome", x);}
    return 0;
}
