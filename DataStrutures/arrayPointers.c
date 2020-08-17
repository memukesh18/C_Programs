/* Display the content of pointers using an array of pointers. */

#include<stdio.h>

void main(){
	char *ptr[3];
	ptr[0] = "Hello ! ";
	ptr[1] = "How are ";
	ptr[2] = "you?";
	printf("%s%s%s\n", ptr[0], ptr[1], ptr[2]);
}
