//Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main(){
    int num,dig,odd_dig = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        dig = num % 10; 
        if (dig % 2 != 0) {
            odd_dig += dig;
        }
        num /= 10;   
    printf("Sum of odd digits: %d\n", odd_dig);

    return 0;
}
}