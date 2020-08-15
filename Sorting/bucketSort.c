/* Program to sort the elements of an array using bucket sort */

#include<stdio.h>
#define max 100

int a[max], n, i;

void main(){
	void input(void);
	input();
}

void input(void){
	void bucket_sort(int a[], int n);
	
	printf("How many elements in the array: ");
	scanf("%d", &n);
	printf("Enter the elements: \n");
	
	for(i=0; i<=n-1; i++){
		scanf("%d", &a[i]);
	}
	
	bucket_sort(a, n);
	printf("Sorted Array are as follows: ");

	for(i=0; i<=n-1; i++){
		printf("%d ", a[i]);
	}
	
	printf("\n");
}

void bucket_sort(int a[], int n){
	int bucket[10][5], buck[10];
	int i, j, k, l, num, div, large, pass;
	div = 1;
	num = 0;
	large = a[0];
	
	for(i=0; i<n; i++){
		if(a[i] > large)
			large = a[i];
	}
	while(large>0){
		num++;
		large = large/10;
	}
	
	for(pass=0; pass<num; pass++){
		for(k=0; k<10; k++){
			buck[k] = 0;
		}
		
		for(i=0; i<n; i++){
			l = (a[i]/div) % 10;
			bucket[l][buck[l]++] = a[i];
		}
		
		i = 0;
		
		for(k=0; k<10; k++){
			for(j=0; j<buck[k]; j++){
				a[i++] = bucket[k][j];
			}
		}
		
		div *= 10;
		
		for(i=0; i<n; i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}
}



