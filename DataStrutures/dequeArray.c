/* Program to implement deque (double ended queue) using arrays */
#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int deque[MAX];
int front, rear;

void initDeque();
int isEmpty();
int isFull();
void enqueBeg(int);
void enqueEnd(int);
void dequeBeg();
void dequeEnd();
void display();


void main(){
    int item, choice;
    initDeque();

    while(1){
        printf("***************MENU***************\n");
        printf("1. Enqueue - Insert in the begining\n");
        printf("2. Enqueue - Insert at the end\n");
        printf("3. Dequeue - delete from the begining\n");
        printf("4. Dequeue - delete from the end\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("**********************************\n");
        printf("Your choice: \n");
        scanf("%i", &choice);

        switch(choice) {
            case 1 :
                printf("Enter the element to be added in the begining: ");
                scanf("%i", &item);
                enqueBeg(item);
                break;
            case 2 :
                printf("Enter the element to be added at the end: ");
                scanf("%i", &item);
                enqueEnd(item);
                break;
            case 3 :
                dequeBeg();
                break;
            case 4 :
                dequeEnd();
                break;
            case 5 :
                display();
                break;
            case 6 :
                exit(0);
            default :
                printf("You entered wrong choice!\n");
                break;
        }
        printf("\nfront = %d, rear =%d\n", front , rear);
        display();
    }
}

void initDeque(){
    front = rear = -1;
}

int isFull(){
    if ( (front==0 && rear==MAX-1) || (front==rear+1) )
        return 1;
    else
        return 0;
}

int isEmpty(){
    if( front == -1)
        return 1;
    else
        return 0;
}

void enqueBeg(int item){
    if( isFull() ){
        printf("\nQueue Overflow\n");
    }
    /*If queue is initially empty*/
    if( front == -1){
        front = 0;
        rear = 0;
    }
    else if(front == 0)
        front = MAX-1;
    else
        front = front-1;
    deque[front] = item ;
}

void enqueEnd(int item){
    if( isFull() ){
        printf("\nQueue Overflow\n");
        return;
    }
      /*if queue is initially empty*/
    if(front == -1){
        front=0;
        rear=0;
    }else if(rear == MAX-1)  /*rear is at last position of queue */
        rear = 0;
    else
        rear = rear+1;
    deque[rear] = item ;
}

void dequeBeg(){
    int item;
    if( isEmpty() ){
        printf("\nQueue Underflow\n");
        exit(1);
    }
    item = deque[front];
    /*Queue has only one element */
    if(front == rear){
        front = -1;
        rear = -1;
    }
    else if(front==MAX-1)
        front=0;
    else
        front=front+1;

    printf("Deleted Element is %d\n", item);
}

void dequeEnd(){
    int item;
    if(isEmpty()){
        printf("\nQueue Underflow\n");
        exit(1);
    }
    item = deque[rear];

    /*queue has only one element*/
    if(front == rear) {
        front = -1;
        rear = -1;
    }
    else if(rear == 0)
        rear = MAX-1;
    else
        rear = rear-1;

    printf("Deleted Element is %d\n", item);
}

void display(){
    int i;
    if( isEmpty() ){
        printf("\nQueue is empty\n");
    }
    printf("\nQueue elements : ");
    i = front;
    if( front <= rear ){
        while(i <= rear)
            printf("%d ",deque[i++]);
    }else{
        while(i<=MAX-1)
            printf("%d ",deque[i++]);
        i = 0;
        while(i <= rear)
            printf("%d ",deque[i++]);
    }
    printf("\n");
}
