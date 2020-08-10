/* program to calculate the factorial of a number */

#include<stdio.h>

int fact(int);

int main(){
	int n, result;
	printf("Enter the number \n");
	scanf("%d", &n);
	result = fact(n);
	printf("The factorial of number %d is %d \n", n, result);
}

int fact(int x){
	if(x == 1)
		return x;
	else
		return x * fact(x-1);
}
