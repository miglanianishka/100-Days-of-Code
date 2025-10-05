/*Q57: Find the sum of array elements.*/
#include <stdio.h>
int main(){
    int arr[100],n, sum = 0;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);

    printf("Enter the elements: ", n);
    for ( int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
   printf ("sum of elements of array is : %d \n", sum);
    return 0;
}

