//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include<math.h>
   int main (){
 int num, n, firstdig, lastdig, digits = 0;
    int pow = 1, middle;

    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;
    lastdig = n % 10;
    while (n >= 10) {
        n = n / 10;
        pow = pow * 10;
        digits++;}
    firstdig = n;
    if (pow == 1) {
        printf("Swapped number: %d\n", num);}
    middle = (num % pow) / 10;
    int swap = lastdig * pow + middle * 10 + firstdig;
    printf("Swapped number: %d\n", swap);

    return 0;
}
