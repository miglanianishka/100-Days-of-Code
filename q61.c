//Q61: Search for an element in an array using linear search.
#include <stdio.h>
int main(){
    int n, arr[100],x,index=-1;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);

    printf("Enter the elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf(" enter the element to search: ");
    scanf("%d", &x);
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            index = i;
        }
    }
    if(index != -1)
        printf("Found at index %d\n", index);
    else
        printf("-1\n");
    return 0;
}
