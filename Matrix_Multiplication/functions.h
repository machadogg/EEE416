#include <stdio.h>
#include <stdlib.h>

void getDimensions(int *cols1, int *cols2, int *rows1, int *rows2);

void getMatrix(int **Matrix, int rows, int cols);

void printMatrix(int **Matrix, int rows, int cols);

int **multiplyMatrices(int **A, int **B, int rows1, int cols1,int rows2, int cols2);