#include<stdio.h>
#include<string.h>

void main(){
	char str1[] = "Hello";
	char str2[] = "World";
	char str3[20];
	char *cpt;
	int length;
	int rc;
	
	/* Find the length of str1 */
	length = strlen(str1);
	printf("String 1, %s is of length %d\n", str1, length);
	
	/* Copy str1 to str3, print both */
	printf("Copying str1 to str3.\n");
	if((cpt = strcpy(str3, str1)) == NULL){
		printf("Error on strcpy");
	}
	
	printf("String 1 is %s\n", str1);
	printf("String 3 is %s\n", str3);
	
	/* clear str3*/
	memset(str3, '\0', 20);
	printf("str3 is cleared\n");
	
	/* Copy first 2 characters of str1 to str3 */
	printf("Copying the first two character of str1 and str3\n");
	strncpy(str3, str1, 2);
	
	printf("String 1 is %s\n", str1);
	printf("String 3 is %s\n", str3);
	
	/*Compare the first 2 characters of str1 and str3 */
	printf("Comparing the first two character of str1 and str3\n");
	if((rc = strncmp(str1, str3, 2)) == 0){
		printf("First two character of str1 and str3 match\n");
	}else{
		printf("First two character of str1 and str3 don't match\n");
	}
	
	/* Compare all characters of str1 and str3 */
	printf("Compring all character of str1 and str3\n");
	rc = strcmp(str1, str3);
	if(rc == 0){
		printf("str1 equals str3\n");
	}else if(rc > 0){
		printf("str1 is greater\n");
	}else{
		printf("str3 is greater\n"); //str1 < str3
	}
	
	/* Append to "he" in str3 */
	printf("Appending to str3\n");
	str3[2] = 'y';
	str3[3] = ' ';
	strcat(str3, str2);
	printf("%s\n", str3);
}


