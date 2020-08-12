// Program to check whether the number is palindrome or not.

#include<stdio.h>

void main(){
	int num, rem, temp;
	int rev = 0;
	printf("Enter a number : ");
	scanf("%d", &num);
	temp = num;
	
	while(num > 0){
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	
	if(rev == temp){
		printf("Number '%d' is palindrome.\n", temp);
	}else{
		printf("Number '%d' is not palindrome.\n", temp);
	}
}
