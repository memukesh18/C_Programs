/* program to find the sum of each digit of a given number */

#include<stdio.h>

void main(){
	int num, temp, rem;
	int sum=0;
	printf("Enter a number: ");
	scanf("%d", &num);
	temp = num;
	
	while(num > 0){
		rem = num % 10;
		sum = sum + rem;
		num = num/10;
	}
	
	printf("sum of the digits of number %d = %d\n", temp, sum);
}
