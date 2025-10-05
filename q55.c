//Q55: Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>
int main(){
    int n, prime;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf(" prime numbers from 1 to %d are: \n", n);
      for (int i = 2; i <= n; i++) {
        prime = 1;  
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                prime = 0;
            }
        }
        if ( prime == 1){
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}