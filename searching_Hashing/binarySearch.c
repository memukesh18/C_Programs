/* Program to search an element from list of elements using binary search technique */

#include<stdio.h>

void main(){
	int a[100], i, n, loc, mid, beg, end, flag=0, item;
	
	printf("Enter the number of elements of the array: ");
	scanf("%d", &n);
	printf("Enter the sorted elements of the array: ");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	printf("Enter the elements to searched\n");
	scanf("%d", &item);

	loc = 0;
	beg = 0;
	end = n-1;
	
	while((beg <= end) && (item != a[mid])){
		mid = (beg + end)/2;
		if(item == a[mid]){
			printf("Search is successful\n");
			loc = mid;
			printf("Position of the item is : %d\n", loc+1);
			flag = flag + 1;
		}else if(item < a[mid])
			end = mid - 1;
		else
			beg = mid + 1;
	}
	
	if(flag == 0)
		printf("Search is not successful\n");

}


