//Q73: Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main(){
    int r,c,matrix[100][100];
    int rowsum[100];
    printf("enter rows and columns for the matrix: ");
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++) {
        rowsum[i] = 0; 
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            rowsum[i] += matrix[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        printf("%d ", rowsum[i]);
    }
    printf("\n");
    return 0;
}
