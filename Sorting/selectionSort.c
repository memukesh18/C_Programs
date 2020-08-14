/* Program to sort the elements of an array using selection sort technique. */

#include <stdio.h>

void selection_sort();

void main(){
	int a[100], n, i;
	printf("How many elements: ");
	scanf("%d", &n);
	
	printf("Enter elements: ");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	selection_sort(a, n);
	
	printf("Sorted elements are as follows: ");
	for(i=0l; i<n; i++){
		printf("%d ", a[i]);
	}
	
	printf("\n");
}

void selection_sort(int a[], int n){
	int min, loc, temp, i, j;
	min = a[0];
	
	for(i=0; i<=n-1; i++){
		min = a[i];
		loc = i;
		
		for(j=i+1; j<=n-1; j++){
			if(a[j] < min){
				min = a[j];
				loc = j;
			}
		}
		
		if(loc != i){
			temp = a[i];
			a[i] = a[loc];
			a[loc] = temp;
		}
	}
}
