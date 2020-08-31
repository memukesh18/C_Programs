/* Program used for dynamic memory management */

#include<stdio.h>
#include<stdlib.h>

void main(){
	int i, n, *arr;
	
	printf("How many elements: ");
	scanf("%d", &n);
	arr = (int*)malloc(n * sizeof(int));
	
	printf("Enter the elements: ");
	for(i=0; i<n; i++){
		scanf("%d", arr+i);
	}
	
	printf("The elements are: ");
	for(i=0; i<n; i++){
		printf("%d ", *(arr+i));
	}
	printf("\n");
	
	free(arr);
	
	printf("The elements after free function are: ");
	for(i=0; i<n; i++){
		printf("%d ", *(arr+i));
	}

	printf("\n");
}
