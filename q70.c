//Q70: Rotate an array to the right by k positions.
#include <stdio.h>
int main(){
    int n, arr[100], k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);
    k = k % n;

    printf("Rotated array:\n");
    for (int i = n - k; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n - k; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}