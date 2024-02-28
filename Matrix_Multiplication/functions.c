#include "functions.h"

void readMatrix(int **A, int **B, int *cols1, int *cols2, int *rows1, int *rows2){
	
	printf("This application multiplies 2 matrices, M = AxB.\nA is an nXm matrix and B is an mXq matrix.");
	printf("\nPlease enter the number of rows and columns for Matrix A: ");
	scanf("%d %d",rows1, cols1);
	printf("Matrix A -> A[%d][%d]", *rows1, *cols1);
	printf("\n\nWe have automatically assigned the number of rows for B = %d", *cols1);
	
	*rows2 = *cols1;
	printf("\nPlease type the number of columns for matrix B: ");
	scanf("%d",cols2);
	printf("Matrix B -> B[%d][%d]\n", *rows2, *cols2);

	/*
	int rows = 2;
    int columns = 5;
    
    int **matrix = (int **) malloc(rows * sizeof(int *));
    
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *) malloc(columns * sizeof(int));
    }	
	*/

	A = (int **)malloc(*rows1 *sizeof(int *)); // Allocate the memory for the rows in Matrix A
	
	// Allocate the memory for the columns in Matrix A
	for(int i=0; i<*rows1; i++){
		A[i] = (int *)malloc(*cols1 *sizeof(int));
	}
	
	if(A==NULL){
		printf("\nError allocating memory for Matrix A.\n");
		exit(1);
	}

	B = (int **)malloc(*rows2 * sizeof(int *));// Allocate the memory for the rows in Matrix B
	
	// Allocate the memory for the columns in Matrix B
	for(int i=0; i<*rows2; i++){
		B[i] = (int *)malloc(*cols2 *sizeof(int));
	}

	if(B==NULL){
		printf("\nError allocating memory for Matrix B.\n");
		exit(1);
	}

	printf("\nMemory successfuly allocated\n");
    // Input elements for matrices
	printf("\nTime to input the elements.\n");
    printf("\nFor A[%d][%d]:\n", *rows1, *cols1);

	for(int i = 0; i < *rows1; i++){
		for(int j = 0; j < *cols1; j++){
			scanf("%d", &A[i][j]);
		}
	}
    
	printf("\nFor B[%d][%d]:\n", *rows2, *cols2);

	for(int i = 0; i < *rows2; i++){
		for(int j = 0; j < *cols2; j++){
			scanf("%d", &B[i][j]);
		}
	}

	printf("A line 1 = [%d %d %d]",A[0][0],A[0][1],A[0][2]);

}

void printMatrix(int **Matrix, int rows, int cols){


	for(int i = 0; i< rows; i++){
		for(int j = 0; j < cols; j++){
			printf("%d ",Matrix[i][j]);
		}
		printf("\n");
	}

}
