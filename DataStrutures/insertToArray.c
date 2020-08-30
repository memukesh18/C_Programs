#include<stdio.h>

int i, len, pos, num;

void main(){
	int a[50];
	void insert(int a[], int, int, int);
	
	printf("Enter integers to be read ");
	scanf("%d", &len);
	printf("Enter the Integers ");
	for(i=0; i <= len-1; i++){
		scanf("%d", &a[i]);
	}
	
	printf("Enter the integer to be inserted ");
	scanf("%d", &num);
	printf("Enter position in the array for insertion ");
	scanf("%d", &pos);
	--pos;
	insert(a, len, pos, num);
	printf("\n");
}

void insert(int a[], int len, int pos, int num){
	for(i=len; i>=pos; i--){
		a[i+1] = a[i];
	}
	a[pos] = num;
	if(pos > len){
		printf("insertion outside the array");
	}
	len++;
	printf("New array: ");
	for(i=0; i<len; i++){
		printf("%d ", a[i]);
	}
}


