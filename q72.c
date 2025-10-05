//Q72: Find the sum of all elements in a matrix.
#include <stdio.h>
int main(){
    int r,c,arr[100][100];
    int sum = 0;
    printf("enter rows and columns for the matrix: ");
    scanf("%d %d", &r, &c);
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }
        printf(" sum is : %d\n", sum);
    return 0;
}
