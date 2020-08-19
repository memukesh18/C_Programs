/* Program to sort a list of integers using heap */

#include<stdio.h>

#define MAX 15

void main(){
	int a[MAX], n, i, s, f, item, value;
	printf("Enter the number of elements\n");
	scanf("%d", &n);
	printf("Enter %d elements: ", n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	for(i=1; i<n; i++){
		item = a[i];
		s = i;
		f =(s-1)/2;
		while((s > 0) && (a[f] < item)){
			a[s] = a[f];
			s = f;
			f = (s-1)/2;
		}
		a[s] = item;
	}
	
	for(i=n-1; i>0; i--){
		value = a[i];
		a[i] = a[0];
		f = 0;
		if(i == 1)
			s = -1;
		else
			s = 1;
		
		if((i > 2) && (a[2] > a[1]))
			s = 2;
			
		while((s >= 0) && (value < a[s])){
			a[f] = a[s];
			f = s;
			s = 2 * f + 1;
			if((s+1 <= i-1) && (a[s] < a[s+1]))
				s = s+1;
			if(s > i-1)
				s = -1;
		}
		a[f] = value;
	}
	printf("\nThe sorted list is\n");
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	
	printf("\n");
}
