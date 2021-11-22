#include <stdio.h>
#include <stdlib.h>
//using the header file instead of creating the function in the main file itself
#include "magic_square.h"

int main()
{
    //two pointers, one for reading the file with the given matrix and another to write the output to a file
    FILE *fptr, *fout;

    if ((fptr = fopen("matrix.txt", "r")) == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    
    int n;
    //To read from the file we use fscanf
    //it will recieve the matrix from the file "matrix.h"
    fscanf(fptr, "%d", &n);
    int i, j;
    //Allocating matrix dynamically
    int **mat = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
        mat[i] = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            fscanf(fptr, "%d", &mat[i][j]);
        }
    }
    fclose(fptr);

    //to write the output to a file
    fout = fopen("Output.txt", "w");

    if (fout == NULL)
    {
        printf("Error opening Output File!");
        exit(1);
    }
    //printing the matrix first
    fprintf(fout, "Given Matrix : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            fprintf(fout, "%d ", mat[i][j]);
        }
        fprintf(fout, "\n");
    }
    //checking if the given matrix is indeed a square matrix or not by calling the function from the header file
    if (isMagicSquare(mat, n))
        fprintf(fout, "The Square is magic.\n");
    else
        fprintf(fout, "The Square is not magic.\n");

    fclose(fout);
    return 0;
}
