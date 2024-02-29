#include <stdio.h>
#include "functions.h"

int main(){

	int cols1, cols2, rows1, rows2;
	int **A;
	int **B;
	
    /* Matrices A and B are pointers to an array of pointers, each pointing to an array of ints*/

	getDimensions(&cols1, &cols2, &rows1, &rows2); // Reads the user inputs for the dimensions of the matrices

    A = (int **)malloc(rows1 *sizeof(int *)); // Allocate the memory for the rows in Matrix A
	
	// Allocate the memory for the columns in Matrix A
	for(int i=0; i<rows1; i++){
		A[i] = (int *)malloc(cols1 *sizeof(int));
	}
	
	if(A==NULL){
		printf("\nError allocating memory for Matrix A.\n");
		exit(1);
	}

	B = (int **)malloc(rows2 * sizeof(int *));// Allocate the memory for the rows in Matrix B
	
	// Allocate the memory for the columns in Matrix B
	for(int i=0; i<rows2; i++){
		B[i] = (int *)malloc(cols2 *sizeof(int));
	}

	if(B==NULL){
		printf("\nError allocating memory for Matrix B.\n");
		exit(1);
	}


    printf("Enter the elements for matrix A[%d][%d]:\n", rows1,cols1);
    getMatrix(A, rows1, cols1); // Reads user input for Matrix A

    printf("Enter the elements for matrix B[%d][%d]:\n", rows2,cols2);
    getMatrix(B, rows1, cols1); // Reads user input for Matrix B

    printf("\nMatrix A: \n");
    printMatrix(A, rows1, cols1); // Confirm the entry for Matrix A

    printf("\nMatrix B: \n");
    printMatrix(B, rows2, cols2); // Confirm the entry for Matrix B

    int **M = multiplyMatrices(A,B,rows1,cols1,rows2,cols2); // Multiplies AxB returning a pointer to
                                                             // and array of pointers (a matrix)

    printf("\nAxB = \n");
    printMatrix(M,rows1,cols2); // Prints the result

	// Free dynamically allocated memory
    for (int i = 0; i < rows1; i++) {
        free(A[i]);
    }
    for (int i = 0; i < rows2; i++) {
        free(B[i]);
    }
    for (int i = 0; i < rows1; i++) {
        free(M[i]);
    }
    free(A);
    free(B);
    free(M);

	return 0;
	
}