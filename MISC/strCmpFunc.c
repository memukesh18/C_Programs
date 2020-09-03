#include<stdio.h>

void main(){
	char string[50];
	char string1[50];
	int i, j, flag;
	printf("Enter first string : ");
	fgets(string, 50, stdin);
	printf("Enter second string : ");
	fgets(string1, 50, stdin);
	i=0; 
	j=0;
	flag = 0;
	while(string[i] != '\0')
		i++;
	while(string1[j] != '\0')
		j++;
	if(i != j)
		flag = 0;
	else{
		i = 0;
		j = 0;
		while((string[i] != '\0') && (string1[j] != '\0')){
			if((string[i] == string1[j])){
				flag = 1;
				break;
			}
			i++;
			j++;
		}
	}
	
	if(flag == 0)
		printf("Strings are not equal : \n");
	else
		printf("strings are equal : \n");
}
