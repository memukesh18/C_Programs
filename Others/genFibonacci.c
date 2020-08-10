/*
 program to generate fibonacci series.
*/

#include<stdio.h>

void fseries(int);

void main(){
	int limit, f0 = 0, f1=1;
	printf("Enter the limit of fibonacci series:\t");
	scanf("%d", &limit);
	
	if(limit > 2){
		printf("%d\n%d", f0, f1);
		fseries(limit-2);
	}
	else if(limit == 2){
		printf("\n %d \n %d", f0, f1);
	}
	else if(limit == 1)
		printf("%d", f1);
	else
		printf("Series not possible.");
}

void fseries(int p){
	int fib;
	static int f0 = 1, f1 = 1;
	if(p == 0)
		printf("\nThe series ends here\n");
	else{
		fib = f0 + f1;
		f0 = f1;
		f1 = fib;
		printf("\n%d", fib);
		fseries(p-1);
	}
}
