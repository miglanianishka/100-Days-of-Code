/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345*/
#include <stdio.h>
int main(){
    int start, spaces;
    for (int i  = 1; i <= 5; i++) {
        for (spaces = 5 - i; spaces > 0; spaces--) {
            printf(" ");
        }
        start = 6 - i;
        for (int j = start; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

