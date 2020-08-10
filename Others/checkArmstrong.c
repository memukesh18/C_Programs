/*	* Program to check whether a number is Armstrong or not.
	* Armstrong number is a number that is equal to the sum of cubes of its digit.
*/

#include<stdio.h>

void main(){
	int num, temp, digit;
	int sumcube = 0;
	printf("Enter a number : ");
	scanf("%d", &num);
	temp = num;
	while(num > 0){
		digit = num % 10;
		sumcube += digit * digit * digit;
		num = num / 10;
	}
	
	if(temp == sumcube){
		printf("Number is Armstrong.\n");
	}else{
		printf("Number is not Armstrong.\n");
	}
}
