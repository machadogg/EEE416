#include "functions.h"

void getDimensions(int *cols1, int *cols2, int *rows1, int *rows2){
	
	printf("This application multiplies 2 matrices, M = AxB.\nA is an nXm matrix and B is an mXq matrix.");
	printf("\nPlease enter the number of rows and columns for Matrix A: ");
	scanf("%d %d",rows1, cols1); //rows and cols are already pointers to the address, so & is not required.
	printf("Matrix A -> A[%d][%d]", *rows1, *cols1);
	printf("\n\nWe have automatically assigned the number of rows for B = %d", *cols1);
	
	*rows2 = *cols1;
	printf("\nPlease type the number of columns for matrix B: ");
	scanf("%d",cols2);
	printf("Matrix B -> B[%d][%d]\n", *rows2, *cols2);

}

// Reads the user input to create each matrix
void getMatrix(int **Matrix, int rows, int cols){

	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			scanf("%d", &Matrix[i][j]); // Here the & is required as we are passing the exact address for the
		}								// matrix element to be stored. Matrix[i][j] is the integer variable
	}									// and therefore &Matrix[i][j] is required to pass the address of that
										// element
}

/* This function returns a matrix as a pointer to a pointer (one pointer for the rows and the other
points to the columns)
It requires the two matrices to be multiplied, also done with pointers
As rows and columns are not going to be manipulated anymore, we just need their values
and not pointers to their address in the memory.
*/
int **multiplyMatrices(int **A, int **B, int rows1, int cols1,int rows2, int cols2){

	// Allocates the rows in the memory
	int **result = (int **)malloc(rows1 * sizeof(int *));
	// Allocates the columns for each row (that is why you do it in a for loop) in the memory.
	for(int i = 0; i < rows1; i++){
		result[i] = (int *)malloc(cols2*sizeof(int));
	}
	
	// Iterative algorithm to multiply both matrices
	for(int i = 0; i<rows1; i++){
		for(int j=0; j<cols2; j++){
			result[i][j] = 0;
			for(int k=0; k<cols1; k++){
				result[i][j] += A[i][k] * B[k][j];
			}
		}
	}

	// Returns the result, which is a pointer to a pointer (same type as the function)
	return result;

}

// Receives the matrix by reference and rows and columns by value
void printMatrix(int **Matrix, int rows, int cols){ 
//Iterates over the matrix element and prints the first row, then the second, and so on.
//After each for loop iterating int j (cols), a \n is used to print the next row.
	for(int i = 0; i< rows; i++){
		for(int j = 0; j < cols; j++){
			printf("%d ",Matrix[i][j]);
		}
		printf("\n");
	}

}

