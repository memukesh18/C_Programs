/* program to print the content of an Array */

#include<stdio.h>

void main(){
	int num[5] = {10, 20, 30, 40, 50};
	for(int i = 0; i < 5; i++){
		printf("num[%d] = %d\n", i, num[i]);
	}
}
