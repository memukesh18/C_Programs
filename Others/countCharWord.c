/* program for counting the number of character and word of sentence */

#include <stdio.h>

void main(){
	char str[200];
	int i, line=0, wrd=1, ch=0;
	
	printf("Enter a string in multiple lines terminated with ~ :\n");
	scanf("%[^~]", str);

	for(i=0; str[i]!='\0'; i++){
		if(str[i] == '\n'){
		  line++;
		  wrd++;
		}else{
		  if(str[i] == ' ' || str[i] == '\t'){
			wrd++;
			ch++;
		  }else 
		  	ch++;
		}
	}

	printf("\nCharacter counts = %d\n", ch);
	printf("Word counts = %d\n", wrd);
	printf("Line counts = %d\n", line);
}
