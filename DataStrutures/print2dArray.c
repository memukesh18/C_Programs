/* program to print the content of 2D Array */

#include<stdio.h>

void main(){
	int i, j;
	int num[2][3] = {10, 20, 30, 40, 50, 60};
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf("num[%d][%d] = %d\n", i, j, num[i][j]);
		}
	}
}
