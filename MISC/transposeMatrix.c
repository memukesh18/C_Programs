/* Program to find the transpose of a matrix. */

#include<stdio.h>

void main(){
	int a[3][3], b[3][3], i, j;
	printf("Enter the elements of the 3x3 matrix A\n");
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &a[i][j]);
			b[j][i] = a[i][j];
		}
	}
	
	printf("Transpose of matrix A is \n");
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
}


