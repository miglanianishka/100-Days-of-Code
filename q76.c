//Q76: Check if a matrix is symmetric.
#include <stdio.h>
int main() {
    int n, mat[100][100];
    int sym = 1;  
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ( mat[i][j] != mat[j][i]){
               sym = 0;
            }
        }
    }
    if (sym == 1) {
        printf("The matrix is symmetric\n");
    } else {
        printf("The matrix is not symmetric\n");
    }
   
    return 0;
}
