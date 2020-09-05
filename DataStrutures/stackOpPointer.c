#include<stdio.h>
#include<stdlib.h>

struct stack{
	int no;
	struct stack *next;
}*top = NULL;

typedef struct stack st;

void push();
int pop();
void display();

void main(){
	int choice;
	
	do{
		printf("**************\n");
		printf("1. PUSH \n");
		printf("2. POP \n");
		printf("3. DISPLAY \n");
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
				display();
				break;
			case 4 :
				exit(0);
		}
	}while(choice!=4);
}

void push(){
	st *p;
	p = (st *) malloc(sizeof(st));
	printf("Enter the number to be inserted : ");
	scanf("%d", &p -> no);
	p -> next = top;
	top = p;
	printf("\n");
}

int pop(){
	st *p;
	p = top;
	if(top == NULL)
		printf("Stack is empty\n");
	else{
		top = top -> next;
		return (p -> no);
		free(p);
	}
}

void display(){
	st *p;
	p = top;
	printf("Stack elements are : ");
	while(p != NULL){
		printf("%d ", p -> no);
		p = p -> next;
	}
	printf("\n\n");
}



