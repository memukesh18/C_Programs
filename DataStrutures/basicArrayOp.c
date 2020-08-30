#include<stdio.h>

void insert();
void del();
void traverse();
void merged();

int a[10], i = -1;

void main(){
	int n;
	do{
		printf("******** Your choices are ************** \n");
		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Traverse\n");
		printf("4. Merged\n");
		printf("5. Exit\n");
		printf("Now enter your choice: \n");
		scanf("%d", &n);
		
		switch(n){
			case 1 :
				insert();
				break;
			case 2 :
				del();
				break;
			case 3 :
				traverse();
				break;
			case 4 :
				merged();
				break;
			case 5 :
				break;
			default :
				printf("Your choice is invalid\n");
		}
	}while(n != 5);
}

void insert(){
	if(i <= 8){
		printf("Enter the No. ");
		while(i <= 8){
			i++;
			scanf("%d", &a[i]);
		}
	}else{
		printf("The Array is Full\n");
	}
	
	printf("\n");
}

void del(){
	int item, j, flag=0, pos;
	printf("Enter the no. to delete: ");
	scanf("%d", &item);
	
	for(j=0; j <= i; j++){
		if(a[j] == item){
			flag = 1;
			pos = j;
		}
	}
	
	if(flag){
		for(j = pos; j<=i; j++){
			a[j] = a[j+1];
		}
		i--;
	}else{
		printf("The no. is not in the list, sorry \n");
	}
}

void traverse(){
	int j;
	for(j = 0; j <= i; j++){
		printf("%d ", a[j]);
	}
	printf("\n");
}

void merged(){
	int p, q, m, n, c;
	int array1[50], array2[50], array3[100];
	puts("Enter number of elements of the first sorted array");
	scanf("%d", &p);
	puts("Enter elements of the first sorted array");
	for(m=0; m<p; m++){
		scanf("%d", &array1[m]);
	}
	puts("Enter number of elements of the seconds sorted array");
	scanf("%d", &q);
	puts("Enter elements of the second array");
	for(n=0; n<q; n++){
		scanf("%d", &array2[n]);
	}
	c = 0;
	m = 0;
	n = 0;
	while((m < p) && (n < q)){
		if(array1[m] <= array2[n]){
			array3[c] = array1[m++];
		}else{
			array3[c] = array2[n++];
		}
		c++;
	}
	
	while(m < p){
		array3[c] = array1[m];
		c++;
		m++;
  	}
  	while(n < q){
  		array3[c] = array2[n];
  		c++;
  		n++;
  	}
  	puts("Merged array in ascending order");
  	for(m=0; m<c; m++){
  		printf("%d ", array3[m]);
  	}
  	printf("\n");
}


