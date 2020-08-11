// Program for checking whether a letter is a vowel or a consonant using switch case

#include<stdio.h>

void main(){
	char letter;
	printf("Enter a character: \t");
	scanf("%c", &letter);
	
	switch(letter){
		case'a':
		case'e':
		case'i':
		case'o':
		case'u':
		case'A':
		case'E':
		case'I':
		case'O':
		case'U':
			printf("It is a vowel.\n");
			break;
		default:
			printf("It is a consonant.\n");
	}
}
