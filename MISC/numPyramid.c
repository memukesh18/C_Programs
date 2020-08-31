/* Program for printing the number pyramid */
#include<stdio.h>

void main(){
	int i, j, k, line, bl;
	printf("Enter the number of line: ");
	scanf("%d", &line);
	printf("\n");
	
	for(i=1; i<=line; i++){
		for(bl=1; bl<=line-i; bl++){
			printf(" ");
		}
		
		for(j=1; j<=i; j++){
			printf("%d", j);
		}
		
		for(k=j-2; k>0; k--){
			printf("%d", k);
		}
		
		printf("\n\n");
	}
}
