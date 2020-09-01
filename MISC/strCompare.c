#include<stdio.h>
#include<string.h>

void main(){
	char first[80], second[80];
	printf("Enter a string : ");
	fgets(first, 80, stdin);
	
	printf("Enter another string : ");
	fgets(second, 80, stdin);
	
	if(strcmp(first, second) == 0)
		puts("The strings are equal");
	else
		puts("The two strings are not equal");

}
