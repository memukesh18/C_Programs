#include<stdio.h>

int i, n;

void main(){
	int a[50], pos;
	void del(int a[], int, int);
	
	printf("How many elements in the array : ");
	scanf("%d", &n);
	printf("Enter the elements of the array : ");
	for(i=0; i <= n-1; i++){
		scanf("%d", &a[i]);
	}
	
	printf("On which postion elements do you want delete : ");
	scanf("%d", &pos);

	del(a, pos, n);
	printf("\n");
}

void del(int a[], int pos, int n){
	int j, item;
	item = a[pos];
	
	for(j=pos; j <= n-1; j++){
		a[j] = a[j+1];
	}
	
	n = n-1;
	printf("New array: ");
	for(i=0; i<=n-1; i++){
		printf("%d ", a[i]);
	}
}


