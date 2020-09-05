#include<stdio.h>
#include<stdlib.h>

void push();
int pop();
void traverse();

int stack[5];
int top = -1;

void main(){
	int choice;
	char ch;
	do{
		printf("**************\n");
		printf("1. PUSH \n");
		printf("2. POP \n");
		printf("3. TRAVERSE \n");
		printf("4. EXIT \n");
		printf("**************\n");
		printf("Enter your choice : ");
		
		scanf("%d", &choice);
		switch(choice){
			case 1 :
				push();
				break;
			case 2 :
				printf("The deleted element is %d\n\n", pop());
				break;
			case 3 :
				traverse();
				break;
			case 4 :
				exit(0);
		}
	}while(choice!=4);
}

void push(){
	int item;
	if(top == 4)
		printf("The stack is full\n");
	else{
		printf("Enter the element to be inserted ");
		scanf("%d", &item);
		top = top + 1;
		stack[top] = item;
	}
	printf("\n");
}

int pop(){
	int item;
	if(top == -1)
		printf("The stack is empty.\n");
	else{
		item = stack[top];
		top = top - 1;
	}
	return item;
}

void traverse(){
	int i;
	if(top == -1)
		printf("The stack is empty");
	else{
		printf("Stack elements are : ");
		for(i=top; i >=0; i--){
			printf("%d ", stack[i]);
		}
	}
	printf("\n\n");
}


