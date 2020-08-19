/* Program to sort a list of integers using heap */

#include<stdio.h>

#define MAXSIZE 15
#define MAX 15

int larger(char *a, char *b){
	int i;
	for(i=0; ((a[i] != 0) && (b[i] != 0) && (a[i] == b[i])); i++){}
	return (a[i] > b[i]);
}

void mov(char *str1, char *str2){
	int j;
	for(j=0; j<MAXSIZE; j++){
		str1[j] = str2[j];
	}
}

void main(){
	int n, i, s, f;
	char a[MAX][MAXSIZE], item[MAXSIZE], value[MAXSIZE];
	printf("Enter the number of elements\n");
	scanf("%d", &n);
	
	printf("Enter %d Strings one by one\n", n);
	for(i=0; i<n; i++){
		scanf("%s", a[i]);
		fflush(stdin);
	}
	
	for(i=1; i<n; i++){
		mov(item, a[i]);
		s = i;
		f =(s-1)/2;
		while((s > 0) && larger(item, a[f])){
			mov(a[s], a[f]);
			s = f;
			f = (s-1)/2;
		}
		mov(a[s], item);
	}
	
	for(i=n-1; i>0; i--){
		mov(value, a[i]);
		mov(a[i], a[0]);
		f = 0;
		if(i == 1)
			s = -1;
		else
			s = 1;
		
		if((i > 2) && larger(a[2], a[1]))
			s = 2;
			
		while((s >= 0) && larger(a[s], value)){
			mov(a[f], a[s]);
			f = s;
			s = 2 * f + 1;
			if((s+1 <= i-1) && larger(a[s+1], a[s]))
				s = s+1;
			if(s > i-1)
				s = -1;
		}
		mov(a[f], value);
	}
	
	printf("\nThe sorted list is as follows:\n");
	for(i=0; i<n; i++){
		printf("%s\n", a[i]);
	}
	
	printf("\n");
}



