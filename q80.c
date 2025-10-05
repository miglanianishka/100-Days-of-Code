//Q80: Multiply two matrices.
#include <stdio.h>
int main()
{
    int m, n, p, q;
    printf("enter the number of rows and columns of matrix A: ");
    scanf("%d %d", &m, &n);
    printf("enter the number of rows and columns of matrix B: ");
    scanf("%d %d", &p, &q);
    if (n == p)
    {
        printf(" multiplication possible\n");
        int A[m][n], B[p][q], C[m][q];
        printf(" enter elements of A: \n");

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &A[i][j]);
            }
            printf("\n");
        }
        printf(" enter elements of B: ");
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                scanf("%d", &B[i][j]);
            }
            printf("\n");
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                int value = 0;
                C[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    value += A[i][k] * B[k][j];
                    C[i][j] = value;
                }
            }
            printf("\n");
        }

        printf("matrix A: \n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d\t", A[i][j]);
            }
            printf("\n");
        }

        printf("matrix B: \n");
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d\t", B[i][j]);
            }
            printf("\n");
        }
        printf(" resultant matrix C: \n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf(" multiplication not possible");
    }
    return 0;
}
