/* Circular queue using Array */
#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int cq[10];
int front = -1, rear = -1;
int choice;

void cqInsert();
void cqDelete();
void cqDisplay();

void main(){
    do {
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1 :
                cqInsert();
                break;
            case 2 :
                cqDelete();
                break;
            case 3 :
                cqDisplay();
                break;
            case 4 :
                exit(0);
            default :
                printf("You have entered a wrong choice\n");
        }
    } while(choice != 4);
}

void cqInsert(){
    int num;
    if(front == (rear + 1) % MAX){
        printf("Queue is full\n");
    }else{
        printf("Enter the element to be inserted : ");
        scanf("%d", &num);
        if (front == -1) {
            front = rear = 0;
        }else{
            rear = (rear + 1) % MAX;
        }
        cq[rear] = num;
    }
}

void cqDelete(){
    int num;
    if(front == -1)
        printf("Queue is empty\n");
    else{
        num = cq[front];
        printf("Deleted element is = %d\n", num);
        if (front == rear) {
            front = rear = -1;
        }else{
            front = (front + 1) % MAX;
        }
    }
}


void cqDisplay(){
    int i;
    if (front != -1) {
        for(i = front; i != rear+1; i++){
            printf("%d ", cq[i]);
        }
    }else{
        printf("Circular queue is empty\n");
    }
    printf("\n");
}
