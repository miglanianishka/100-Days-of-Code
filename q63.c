//Q63: Merge two arrays.
#include <stdio.h>
int main(){
    int arr1[100],arr2[100], mer[200];
    int a,b,i;
    printf("Enter number of elements in first array: ");
    scanf("%d", &a);
    printf("Enter the elements of first array:\n", a);
    for (i = 0; i < a; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter number of elements in second array: ");
    scanf("%d", &b);
    printf("Enter the elements of second array:\n", b);
    for (i = 0; i < b; i++) {
        scanf("%d", &arr2[i]);
    }
    for ( i = 0; i < a; i++) {
        mer[i] = arr1[i];
    }
    for (int j = 0; j < b; j++) {
        mer[i + j] = arr2[j];
    }
    printf("Merged array:\n");
    for (i = 0; i < a + b; i++) {
        printf("%d ", mer[i]);
    }
    printf("\n");
    return 0;
}