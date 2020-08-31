//display the content of a two dimensional array using pointers

#include<stdio.h>


int main(){
	static int a[3][2] = {
			{100, 200},
			{300, 400},
			{500, 600},
		};
	int *ptr1, i, j, n, m;
	ptr1 = &a[0][0];
	n = 3;
	m = 2;
	for(i = 0; i <= n-1; i++){
		for(j = 0; j <= m-1; j++){
			printf("%d\t", *ptr1);
			ptr1++;
		}
		printf("\n");
	}
}
