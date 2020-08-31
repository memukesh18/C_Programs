/* program for copying the contents of one file to another */

#include<stdio.h>
#include<stdlib.h>

void main(){
	FILE *fs, *ft;
	char ch;
	
	fs = fopen("./Files/source.txt", "r");
	if(fs == NULL){
		puts("cannot open the file\n");
		exit(0);
	}
	
	ft = fopen("./Files/target.txt", "w");
	if(ft == NULL){
		puts("cannot open the target file.\n");
		fclose(fs);
		exit(0);
	}
	
	//copying the contents to the new file
	while(1){
		ch = fgetc(fs);
		if(ch == EOF)
			break;
		else
			fputc(ch, ft);
	}
	
	printf("Succesfully copied...\n");
	
	//closing the file
	fclose(fs);
	fclose(ft);
}
