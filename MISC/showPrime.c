/* Program to show all prime numbers between 1 to n, where n is supplied by user */

#include<stdio.h>

void main(){
	int i, j, n;
	printf("Enter the upper range for generating prime number: ");
	scanf("%d", &n);
	printf("List of prime numbers upto %d :-\n", n);
	
	for(i=1; i<n; i++){
		for(j=2; j<i; j++){
			if(i % j == 0)
				break;
		}
		if(j == i){
			printf("%d  ", i);
		}
	}
	printf("\n");
}
