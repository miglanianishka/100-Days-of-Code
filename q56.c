//Q56: Read and print elements of a one-dimensional array.
#include <stdio.h>
int main(){
    int arr[100],n;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);

    printf("Enter the elements: ", n);
    for ( int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf(" Array elements are: \n");
     for ( int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf ("\n");
    return 0;
}