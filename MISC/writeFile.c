/* program for writing and displaying content */

#include<stdio.h>

void main(){
	FILE *fp;
	char ch;
	printf("Enter few lines [press CTRL+D for linux or CTRL+Z for windows] to Escape: \n");

	fp = fopen("./Files/file1.txt", "w");
	while((ch = getchar()) != EOF){
		fputc(ch, fp);
	}	
	fclose(fp);
	
	printf("Entered content: \n");
	
	fp = fopen("./Files/file1.txt", "r");
	while((ch = fgetc(fp)) != EOF){
		printf("%c", ch);
	}
	fclose(fp);
}
