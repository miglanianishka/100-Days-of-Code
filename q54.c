/*Q54: Write a program to print the following pattern:
   *
  ***
 *****
*******
 *****
  ***
   * */
#include <stdio.h>
int main(){
    int n = 7;
    int mid = (n + 1) / 2;
    for (int i = 1; i <= mid; i++) {
        for (int j = 1; j <= mid - i; j++) {
            printf(" ");}
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");}
        printf("\n");}
    for (int i = mid - 1; i >= 1; i--) {
        for (int j = 1; j <= mid - i; j++) {
            printf(" ");}
        
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");}
        printf("\n");}
    return 0;
}  


