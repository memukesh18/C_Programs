/* Program for checking the string is palindrome or not */
#include<stdio.h>

void main(){
	char str[10];
	int i=0, len, c;
	printf("Enter the string: ");
	scanf("%s", str);
	
	//finding the string length
	for(len=0; str[len]; len++);
	len = len-1;
	
	//process for comparing character
	while(i <= len){
		if(str[i] == str[len]){
			c = 1;
		}else{
			c = 0;
			break;
		}
		i++;
		len--;
	}
	if(c == 1){
		printf("String '%s' is palindrome\n", str);
	}else{
		printf("String '%s' is not Palindrome\n", str);
	}
}
