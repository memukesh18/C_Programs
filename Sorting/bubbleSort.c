#include <stdio.h>

void bubble_sort();

void main(){
	int a[100], i, n;
	printf("How many elements in array: ");
	scanf("%d", &n);
	
	printf("Enter %d elements: ", n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	bubble_sort(a, n);
	printf("Sorted elements are as follows: ");
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}

void bubble_sort(int a[], int n){
	int temp, i, j;
	
	for(i=0; i<n; i++){
		for(j=0; j<n-i-1; j++){
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
