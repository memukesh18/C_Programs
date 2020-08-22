/* Program to search an element using linear search */

#include<stdio.h>

void main(){
	int a[100], n, i, item, loc = -1;
	
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	printf("Enter the elements: ");
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	printf("Enter the number to be searched: ");
	scanf("%d", &item);
	
	for(i=0; i<n; i++){
		if(item == a[i]){
			loc = i;
			break;
		}
	}
	if(loc >= 0)
		printf("%d is found at location %d\n", item, loc+1);
	else
		printf("Item does not exist\n");
}


