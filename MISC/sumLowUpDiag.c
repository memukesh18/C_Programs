#include<stdio.h>

void main(){
	int sum1=0, sum2=0;
	int i, j;
	int a[4][4] =  {{1, 2, 3, 4},
					{5, 4, 3, 2},
					{9, 8, 7, 6},	
					{4, 5, 7, 3}};
	
	for(i=0; i<=3; i++){
		for(j=0; j<=3; j++){
			if(i > j)
				sum1 = sum1 + a[i][j];
			else if(i < j)
				sum2 = sum2 + a[i][j];
		}
	}
	
	printf("total of elements above the diagonal elements %d\n", sum1);
	printf("total of elements below the diagonal elements %d\n", sum2);
}
