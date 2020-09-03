/* Program to print the string in alphabetical order */
#include<stdio.h>
#include<string.h>

void main(){
	char a[20];
	int i, j, k;
	printf("Enter the string: ");
	fgets(a, 20, stdin);
	printf("The string in alphabetical order is : ");
	
	for(i=0; a[i] != '\0'; i++){
		j = i;
		for(k=i+1; a[k] != '\0'; k++){
			if(a[k] < a[j])
			j = k;
		}
		k = a[i];
		a[i] = a[j];
		a[j] = (char) k;
		printf("%c", a[i]);
	}
	printf("\n");
}


