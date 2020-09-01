#include<stdio.h>

#define max 100

void main(){
	int a[max], i, n, sumOdd, sumEve;
	sumOdd = 0;
	sumEve = 0;
	
	printf("Enter the number of elements : ");
	scanf("%d", &n);
	
	printf("Enter the elements : ");	
	for(i=0; i<= n-1; i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<= n-1; i++){
		if(a[i]%2 == 0)
			sumEve = sumEve + a[i];
		else
			sumOdd = sumOdd + a[i];
	}
	
	printf("sum of even numbers = %d\n", sumEve);
	printf("sum of odd numbers = %d\n", sumOdd);
}
