/* program for addition of 3x3 matrix */

#include<stdio.h>
void main(){
	int mat1[3][3], mat2[3][3], mat3[3][3], result[3][3], i, j;
	
	printf("Enter the values for 1st Matrix[3x3]: ");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &mat1[i][j]);
		}
		printf("\n%d %d %d\n", mat1[i][0], mat1[i][1], mat1[i][2]);
	}
	
	printf("Enter the values for 2nd Matrix[3x3]: ");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &mat2[i][j]);
		}
		printf("\n%d %d %d\n", mat2[i][0], mat2[i][1], mat2[i][2]);
	}
	
	printf("Addition of two Matrix[3x3]: ");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			result[i][j] = mat1[i][j] + mat2[i][j];
		}
		printf("\n%d %d %d\n", result[i][0], result[i][1], result[i][2]);
	}
}
