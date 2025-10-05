//Q62: Reverse an array without taking extra space.
#include <stdio.h>
int main(){
    int n, arr[100],x;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);

    printf("Enter the elements: ", n);
    for ( int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }    
    for(int i = 0; i < n / 2; i++) {
        x = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = x;
    }
    printf("Reversed array: \n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}