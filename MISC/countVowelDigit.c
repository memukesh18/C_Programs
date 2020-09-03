/* Program to count the number of vowels and digits in a given string */

#include<stdio.h>

void main(){
	char str[50];
	int i=0, v=0, d=0;
	
	printf("Enter a string :");
	fgets(str, 50, stdin);

	while(str[i] != '\0'){
		if((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
			v++;
		if((str[i] >= '0') && (str[i] <= '9'))
			d++;
		i++;
	}
	printf("Number of vowels are : %d\n", v);
	printf("Number of digits are : %d\n", d);
}
