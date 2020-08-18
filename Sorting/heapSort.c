/* Program to implement heap sort */

#include<stdio.h>

void make_heap(int [], int);
void heap_sort(int[], int);

void main(){
	int a[100], n, i;
	
	printf("How many elements in the array: ");
	scanf("%d", &n);
	printf("Enter the elements: \n");
	
	for(i=0; i<=n-1; i++){
		scanf("%d", &a[i]);
	}
	
	printf("Heap sort:- \n");
	make_heap(a, n);
	
	printf("Before Sorting : ");
	for(i=0; i<=n-1; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	
	heap_sort(a, n);
	printf("After Sorting : ");

	for(i=0; i<=n-1; i++){
		printf("%d ", a[i]);
	}
	
	printf("\n");
}

void make_heap(int x[], int n){
	int i, val, s, f;
	
	for(i=1; i<n; i++){
		val = x[i];
		s = i;
		f = (s-1) / 2;
		
		while(s > 0 && x[f] < val){
			x[s] = x[f];
			s = f;
			f = (s-1)/2;
		}
		x[s] = val;
	}
}

void heap_sort(int x[], int n){
	int i, s, f, ivalue;
	for(i = n-1; i > 0; i--){
		ivalue = x[i];
		x[i] = x[0];
		f = 0;
		if(i == 1)
			s = -1;
		else
			s = 1;
		
		if(i>2 && x[2] > x[1])
			s = 2;
		
		while(s>=0 && ivalue < x[s]){
			x[f] = x[s];
			f = s;
			s =2 * f + 1;
			
			if(s+1 <= i-1 && x[s] < x[s+1])
				s++;
			if(s > i-1)
				s = -1;
		}
		x[f] = ivalue;
	}
}


