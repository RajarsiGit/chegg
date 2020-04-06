/*********************************** * FILENAME: - mm.c ************************************/ 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/***************** DO NOT USE ARRAY INDEXING *****************/
/************** USE ONLY POINTERS IN THIS FILE ***************/
/* You may define additional functions and local variables. */
/* Save the three command-line arguments into nr1, nc1 and nc2. */
void get_args( char **argv, int &nr1, int &nc1, int &nc2 ){
	nr1 = atoi(*(argv+1));
	nc1 = atoi(*(argv+2));
	nc2 = atoi(*(argv+3));
/*************** ADD YOUR CODE HERE ***************/
}
/* Initialize a 2-dimensional array. Element (i, j) is assigned value i+j. */
void initMatrix ( int **a, int nrows, int ncols ){
	int i,j;
	a = (int**)malloc(sizeof(int)*ncols*nrows);
	for(i=0;i<nrows;i++){
		for(j=0;j<ncols;j++){
			*(*(a+i)+j) = (i+j);
		}
	}
/*************** ADD YOUR CODE HERE ***************/
}
/* Multiply arrays a and b. Array a has nr1 rows and nc1 columns. Array b has nc1 rows and nc2 columns. Allocate an array c having nr1 rows and nc2 columns. Compute a x b and store the result in array c. Return array c. If an error occurs (e.g., insufficient memory), return NULL pointer. */
int **matrix_mult( int **a, int **b, int nr1, int nc1, int nc2 ){
	int i,j,k;
	int **c;
	initMatrix(c, nr1, nc2);
	
	for(i=0;i<nr1;i++){
		for(j=0;j<nc2;j++){
			*(*(c+i)+j) = 0;
			for(k=0;k<nc1;k++){
				*(*(c+i)+j) += ((*(*(a+i)+k)) * (*(*(b+k)+j)));
			}
		}
	}
/*************** ADD YOUR CODE HERE ***************/
	return( c );
/* replace this line with your code */
}
/************************* END OF FILE mm.c *************************/
