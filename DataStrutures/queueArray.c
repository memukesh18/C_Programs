/* Program to implement linear queue using array. */
#include<stdio.h>
#include<stdlib.h>

void initqueue();
void display();

int queue[5];
long front, rear;

void main(){
	int choice, info;
	
	initqueue();
	do{
		printf("*************MENU*************\n");
		printf("1. Insert an element in queue\n");
		printf("2. Delete an element from queue\n");
		printf("3. Display the queue\n");
		printf("4. Exit!\n");
		printf("Your Choice: ");
		scanf("%i", &choice);
		switch(choice){
			case 1 : 
				if(rear < 4){
					printf("Enter the number : ");
					scanf("%d", &info);
					if(front == -1){
						front = 0;
						rear = 0;
					}else{
						rear = rear + 1;
					}
					queue[rear] = info;
				}else
					printf("queue is full.\n");

				printf("\n");
				break;
			case 2 :
				if(front != -1){
					info = queue[front];
					if(front == rear){
						front = -1;
						rear = -1;
					}else
						front = front + 1;

					printf("The deleted number is = %d\n", info);
				}else
					printf("queue is empty.\n");

				printf("\n");
				break;
			case 3 :
				display();
				printf("\n");
				break;
			case 4 :
				exit(0);
			default : 
				printf("You entered wrong choice!\n");
		}
	}while(choice != 4);
}


void initqueue(){
	front = rear = -1;
}

void display(){
	int i;
	for(i=front; i <= rear; i++){
		printf("%i ", queue[i]);
	}
	printf("\n");
}


