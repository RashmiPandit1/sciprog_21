#include <stdio.h>
#include "mult_fun.c"

const int n= 5;
const int p = 3;
const int q = 4;


int main()
{
    int n = 5, p = 3, q = 4;
    int A[n][p], B[p][q], C[n][q];
    int i = 0, j = 0, k = 0;

    // Define A
    for(i = 0; i < n; i++)
        for(j = 0; j < p; j++)
            A[i][j] = i + j;

    // Define B
    for(i = 0; i < p; i++)
        for(j = 0; j < q; j++)
            B[i][j] = i - j;

    // Define C
    for(i = 0; i < n; i++)
        for(j = 0; j < q; j++)
            C[i][j] = 0;

    // Multiplying A and B matrices to get C
    /*for(i = 0; i < n; i++)
        for(j = 0; j < q; j++)
            for(k = 0; k < p; k++)
                C[i][j] += A[i][k] + B[k][j];*/

    multiply_matrices(n, p, q, A, B, C);

    // Printing A
    printf("\nMatrix A: \n");
    for(i = 0; i < n; i++){
        for(j = 0; j < p; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }

    // Printing B
    printf("\nMatrix B: \n");
    for(i = 0; i < p; i++){
        for(j = 0; j < q; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }

    // Printing C
    printf("\nMatrix C: \n");
    for(i = 0; i < n; i++){
        for(j = 0; j < q; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}
