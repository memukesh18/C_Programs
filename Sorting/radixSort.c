/* program for implement radix sort */

#include<stdio.h>

#define MAX 5

// Function to get the largest element from an array
int getMax(int array[], int n){
	int max = array[0];
	for (int i = 1; i < n; i++){
		if (array[i] > max)
			max = array[i];	
	}
	return max;
}


// Using counting sort to sort the elements in the basis of significant places
void countingSort(int array[], int size, int place) {
	int output[size + 1];
	int max = (array[0] / place) % 10;

	for (int i = 1; i < size; i++){
		if (((array[i] / place) % 10) > max)
	  	max = array[i];
	}
	int count[max + 1];

	for (int i = 0; i < max; ++i)
		count[i] = 0;

	// Calculate count of elements
	for (int i = 0; i < size; i++)
		count[(array[i] / place) % 10]++;

	// Calculate cummulative count
	for (int i = 1; i < 10; i++)
		count[i] += count[i - 1];

	// Place the elements in sorted order
	for (int i = size - 1; i >= 0; i--) {
		output[count[(array[i] / place) % 10] - 1] = array[i];
		count[(array[i] / place) % 10]--;
	}

	for (int i = 0; i < size; i++)
		array[i] = output[i];
}


// Function to implement radix sort
void radix_sort(int array[], int size) {
 	// Get maximum element
	int max = getMax(array, size);

	// Apply counting sort to sort elements based on place value.
	for (int place = 1; max / place > 0; place *= 10)
		countingSort(array, size, place);
}


void main(){
	int NUM[MAX], i = 0;
	puts("\n -: PROGRAM TO DEMONSTRATE RADIX SORT :- \n");
	for(i=0; i<MAX; i++){
		printf("ENTER NUMBER [%d] = ", i+1);
		scanf("%d", &NUM[i]);
	}
	
	radix_sort(NUM, MAX);
	puts("\nSORTED LIST ARE AS FOLLOWS:-");
	
	for(i=0; i< MAX; i++){
		printf("%d ", NUM[i]);
	}
	
	printf("\n");
}



