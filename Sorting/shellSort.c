/* Program to implement the shell sort */

#include<stdio.h>

void shell_sort(int nums[], int array_size);


void main(){
	int nums[10], i, n;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	printf("Enter %d elements one by one :", n);
	for(i=0; i < n; i++){
		scanf("%d", &nums[i]);
	}
	
	shell_sort(nums, n);
	
	printf("Sorted list are as follows: ");
	
	for(i=0; i<n; i++){
		printf("%d ", nums[i]);
	}
	printf("\n");
}

void shell_sort(int nums[], int array_size){
	int i, j, increment, temp;
	increment = 3;
	
	while(increment > 0 ){
		for(i=0; i<array_size; i++){
			j = i;
			temp = nums[i];
			while((j >= increment) && (nums[j-increment] > temp)){
				nums[j] = nums[j-increment];
				j = j-increment;
			}
			
			nums[j] = temp;
		}
		
		if(increment / 2 != 0 )
			increment = increment/2;
		else if(increment == 1)
			increment = 0;
		else
			increment = 1;
	}
}


