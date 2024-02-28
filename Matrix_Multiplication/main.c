#include <stdio.h>
#include "functions.h"

int main(){

	int cols1, cols2, rows1, rows2;
	int **A;
	int **B;
	int **M;

	readMatrix(A, B, &cols1, &cols2, &rows1, &rows2);

	// printf("\nMatrix A:\n");
	// printMatrix(A,rows1,cols1);
	

	// printf("\nMatrix B:\n");
	// printMatrix(B,rows1,cols1);


	// Free dynamically allocated memory
    for (int i = 0; i < rows1; i++) {
        free(A[i]);
    }
    for (int i = 0; i < rows2; i++) {
        free(B[i]);
    }
    // for (int i = 0; i < rows1; i++) {
    //     free(result[i]);
    // }
    free(A);
    free(B);
    // free(result);

	return 0;
	
}