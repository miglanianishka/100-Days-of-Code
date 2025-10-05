//Q71: Read and print a matrix.
#include <stdio.h>
int main(){
    int r,c,arr[100][100];
    printf("enter rows and columns for the matrix: ");
    scanf("%d %d", &r, &c);
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
