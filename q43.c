//Q43: Write a program to check if a number is a strong number.
#include <stdio.h>
int main(){
    int num,n,dig,fact,sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
     n= num;
     while (n > 0) {
        dig = n % 10;
        fact = 1;
        for (int i = 1; i <= dig; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }
    if (sum == n) {
        printf("%d is a Strong Number\n", num);
    } else {
        printf("%d is not a Strong Number\n", num);
    }
    return 0;
}
