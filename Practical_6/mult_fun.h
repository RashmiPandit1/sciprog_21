void multiply_matrices(int n, int p, int q, int A[][p], int B[][q], int C[][q])
{
    int i, j, k;
    for(i = 0; i < n; i++){
        for(j = 0; j < q; j++)
        {
            int temp = 0;
            for(k = 0; k < p; k++)
                temp += A[i][k] + B[k][j];
            C[i][j] = temp;
        }
    }
}
