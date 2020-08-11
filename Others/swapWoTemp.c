// Program for swapping of two numbers without third variable
// compile using gcc -o swapNums swapNums.c (ubuntu)
#include<stdio.h>

void main(){
	int num1, num2, temp;
	printf("Enter the values for swapping [num1, num2]:\n");
	scanf("%d %d", &num1, &num2);
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	printf("The values after swapping is num1 = %d and num2 = %d\n", num1, num2);
}
