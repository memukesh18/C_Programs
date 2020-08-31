/*	* Perfect number, a positive integer that is equal to the sum of its proper divisors. 
	 The smallest perfect number is 6
	
	* Program to check whether a number is perfect or not.
*/

#include<stdio.h>

void main(){
	int num, temp, i;
	int sum = 0;
	printf("Enter a number : ");
	scanf("%d", &num);
	temp = num;
	
	for(i=1; i<num; i++){
		if(num % i == 0)
			sum = sum + i;
	}
	
	if(sum == temp){
		printf("Number is perfect.\n");
	}else{
		printf("Number is not perfect.\n");
	}
}
