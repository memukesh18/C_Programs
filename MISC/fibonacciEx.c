/*
	program to calculate the nth number of the fibonacci series.
*/

#include<stdio.h>

int fibnum(int);

int main(){
	int p, num;
	printf("Enter the position of element you want from the fibonacci series \t");
	scanf("%d", &p);
	num = fibnum(p);
	printf("The required fibonacci number is %d\n", num);
}

int fibnum(int p){
	if(p == 1 || p == 0)
		return p;
	else
		return (fibnum(p-1) + fibnum(p-2));
}
