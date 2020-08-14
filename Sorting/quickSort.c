/* Program to sort the elements of an array using quick sort technique */

#include<stdio.h>
#define max 100
int a[max], n, i, l, h;

void main(){
	void input(void);
	input();
}

void input(void){
	void quick_sort(int a[], int l, int h);
	
	printf("How many elements in the array: ");
	scanf("%d", &n);
	printf("Enter the elements: \n");
	
	for(i=0; i<=n-1; i++){
		scanf("%d", &a[i]);
	}
	
	l = 0;
	h = n-1;
	quick_sort(a, l, h);
	printf("Sorted Array are as follows: ");

	for(i=0; i<=n-1; i++){
		printf("%d ", a[i]);
	}
	
	printf("\n");
}

void quick_sort(int a[], int l, int h){
	int temp, key, low, high;
	low = l;
	high = h;
	key = a[(low + high)/ 2];
	do{
		while(key > a[low]){
			low++;
		}
		while(key < a[high]){
			high--;
		}
		if(low <= high){
			temp = a[low];
			a[low++] = a[high];
			a[high--] = temp;
		}
	}while(low <= high);
	
	if(l < high){
		quick_sort(a, l, high);
	}
	if(low < h){
		quick_sort(a, low, h);
	}
}




