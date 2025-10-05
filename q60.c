//Q60: Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main(){
    int n, arr[100],pos=0, neg=0,zero=0;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);

    printf("Enter the elements: ", n);
    for ( int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
          if (arr[i] > 0) {
            pos++;
        } else if (arr[i] < 0) {
            neg++;
        } else {
            zero++;
        }
    }
    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Zeroes: %d\n", zero);

    return 0;
}
