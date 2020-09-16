/* Program to illustrates the working of a queue when implemented using pointers */
#include<stdio.h>
#include<stdlib.h>

struct node{
	int num;
	struct node *next;
}
*front = NULL, *rear = NULL;
typedef struct node node;

void enQueue();
void deQueue();
void traverse();

void main(){
	int choice;
	
	do{
		printf("*************MENU*************\n");
		printf("1. Insert an element in queue\n");
		printf("2. Delete an element from queue\n");
		printf("3. Traverse\n");
		printf("4. Exit!\n");
		printf("Enter Your Choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1 : 
				enQueue();
				break;
			case 2 :
				deQueue();
				break;
			case 3 :
				traverse();
				printf("\n");
				break;
			case 4 :
				exit(0);
			default : 
				printf("You entered wrong choice!\n");
		}
	}while(choice != 4);
}


void enQueue(){
	node *p;
	p =(node *) malloc(sizeof(node));
	printf("Enter the number to be inserted: ");
	scanf("%d ", &p -> num);
	if((front == NULL) && (rear == NULL)){
		front = p;
		rear = p;
		p -> next = NULL;
	}else{
		rear -> next = p;
		p->next = NULL;
		rear = p;
	}
}

void deQueue(){
	node *p;
	if(front != NULL){
		p = front;
		if(front == rear){
			front = NULL;
			rear = NULL;
		}else
			front = rear -> next;
			printf("The deleted no is %d\n", p-> num);
	}else
		printf("Queue is empty\n");
}

void traverse(){
	node *p;
	if(front != NULL){
		p = front;
		while(p != NULL){
			printf("%d ", p -> num );
			p = p -> next;
		}
	}else
		printf("Queue is empty\n");
}



