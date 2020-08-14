/* Program to sort element of an array using insertion sort technique */

#include <stdio.h>

void insertion_sort();

void main(){
	int a[100], n, i;
	
	printf("How many elements: ");
	scanf("%d", &n);
	
	printf("Enter the elements: ");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	insertion_sort(a, n);
	printf("Sorted elements are as follows: ");
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	
	printf("\n");
}

void insertion_sort(int a[], int n){
	int i, j, temp;
	
	for(i=1; i<=n; i++){
		temp = a[i];
		j = i-1;
		while(temp<a[j] && j>=0){
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = temp;
	}
}
