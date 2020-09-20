#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

void en_queue(int *arr, int data, int *front, int *rear);
int de_queue(int *arr, int *front, int *rear);
void cq_Display(int *arr, int *front, int *rear);
int isEmpty(int front);
int isFull(int front, int rear);

void main(){
	int array[SIZE], front, rear, value, choice;
	front = rear = -1;
	do {
		printf("1. En_Queue\n");
		printf("2. De_Queue\n");
		printf("3. De_Queue Entire Queue\n");
		printf("4. Display\n");
		printf("5. Exit\n");
		printf("Enter your choice: \n");
		scanf("%d", &choice);

		switch (choice) {
			case 1 :
				value = isFull(front, rear);
				if(value == 1){
					printf("Enter value to be En_Queue\n");
					scanf("%d", &value);
					en_queue(array, value, &front, &rear);
				}else{
					printf("Error: Queue Overflow.\n");
				}
				break;
			case 2 :
				value = isEmpty(front);
				if(value == 1){
					value = de_queue(array, &front, &rear);
					printf("De_Queue value = %d\n", value);
				}else{
					printf("Error: Queue underflow.\n");
				}
				break;
			case 3 :
				value = isEmpty(front);
				if (value == 1) {
					printf("Queue Elements : ");
					while(front > -1){
						value = de_queue(array, &front, &rear);
						printf("%d ", value);
					}
				}else{
					printf("Error: Queue underflow.\n");
				}
			case 4 :
				cq_Display(array, &front, &rear);
				break;
			case 5 :
				exit(0);
			default :
				printf("Invalid Choice.\n");
		}
	} while(choice != 5);
}


void en_queue(int *arr, int data, int *front, int *rear){
	if(*rear == SIZE -1){
		*rear = 0;
	}else{
		(*rear)++;
	}
	arr[*rear] = data;
	if(*front == -1);
		*front = 0;
}

int de_queue(int *arr, int *front, int *rear){
	int data = arr[*front];
	if(*front == *rear)
		*front = *rear = -1;
	else if(*front == SIZE -1)
		*front = 0;
	else
		(*front)++;

	return (data);
}

void cq_Display(int *arr, int *front, int *rear){
    int i;
    if (*front != -1) {
        for(i = *front; i != *rear+1; i++){
            printf("%d ", arr[i]);
        }
    }else{
        printf("Circular queue is empty\n");
    }
    printf("\n");
}

int isEmpty(int front){
	if(front == -1)
		return 0;
	else
		return 1;
}

int isFull(int front, int rear){
	if ((front == 0 && rear == SIZE-1) || (front == rear + 1)) {
		return 0;
	}else{
		return 1;
	}
}
