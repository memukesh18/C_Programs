/*
	Program to print the reverse of an integer number
*/

#include<stdio.h>
#include<stdlib.h>

int revint(int);

void main(){
	int n, result;
	printf("Enter the number\t");
	scanf("%d", &n);
	result = revint(n);
	printf("The reverse of number %d is %d\n",n , result);
}

int revint(int p){
	int d;
	static int r=0;
	if(p == 0)
		return p;
	else{
		d = p % 10;
		r = r * 10 + d;
		revint(p/10);
	}
	return r;
}
