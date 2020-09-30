#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

typedef struct deque{
    int arr[SIZE];
    int front;
    int rear;
}deque;

void initDeque(deque *);
int enqueBeg(deque *, int);
int enqueEnd(deque *, int);
int dequeBeg(deque *, int *);
int dequeEnd(deque *, int *);
void display(deque);

void main(){
    deque dq;
    int item, choice, call, flag;
    call = flag = 0;
    initDeque(&dq);
    while (1) {
        printf("\n**************** MENU *****************\n");
        printf("1. En-queue - Append in the begining\n");
        printf("2. En-queue - Append at the end\n");
        printf("3. De-queue - Delete from the begining\n");
        printf("4. De-queue - Delete from the end\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("******************************************\n");
        printf("Your choice : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1 :
                printf("Enter the element to be added in the begining : ");
                scanf("%d", &item);
                call = enqueBeg(&dq, item);
                if(call)
                    printf("Element added in the begining!\n");
                else
                    printf("Element can't be added!\n");
                break;

            case 2 :
                printf("Enter the element to be added in the end : ");
                scanf("%d", &item);
                call = enqueEnd(&dq, item);
                if(call)
                    printf("Element added in the end!\n");
                else
                    printf("Element can't be added!\n");
                break;

            case 3 :
                item = dequeBeg(&dq, &flag);
                if(flag)
                    printf("Popped out element is %d\n", item);
                else
                    printf("Element can't be popped out from the begining!\n");
                break;

            case 4 :
                item = dequeEnd(&dq, &flag);
                if(flag)
                    printf("Popped out element is %d\n", item);
                else
                    printf("Element can't be popped out from the end!\n");
                break;
            case 5 :
                display(dq);
                break;
            case 6 :
                exit(0);
            default :
                printf("Wrong choice!\n");
                break;
        }
        printf("\nfront = %d, rear = %d\n", dq.front , dq.rear);
        display(dq);
    }
}


void initDeque(deque *dq){
    dq -> front = dq -> rear = -1;
}

int enqueBeg(deque *dq, int item){
    int i;
    //To check if element is full
    if(dq -> front == 0 && dq -> rear == SIZE-1)
        return 0;
    //If deque is empty then first element can be simply added
    if(dq -> front == -1){
        dq -> front = dq -> rear = 0;
        dq -> arr[dq -> front] = item;
        return 1;
    }
    //If the deque is full from the front only
    if(dq->front == 0 && dq->rear != SIZE-1){
        for(i = dq->rear; i >= dq->front; i--)
            dq -> arr[i+1] = dq -> arr[i];

        dq -> rear++;
        dq -> arr[dq -> front] = item;
    }
    //If the deque is empty from the front
    else if(dq->front > 0){
        dq->front--;
        dq->arr[dq->front] = item;
    }
    return 1;
}

int enqueEnd(deque *dq, int item){
    int i;
    //To check if element is full
    if(dq -> front == 0 && dq -> rear == SIZE-1)
        return 0;
    //If deque is empty then first element can be simply added
    if(dq -> front == -1){
        dq -> front = dq -> rear = 0;
        dq -> arr[dq -> front] = item;
        return 1;
    }
    //If the deque is full from the front only
    if(dq->front != 0 && dq->rear == SIZE-1){
        for(i = dq->front; i <= dq->rear; i++)
            dq -> arr[i-1] = dq -> arr[i];

        dq -> front++;
        dq -> arr[dq -> rear] = item;
    }
    //If the deque is empty from the front
    else if(dq->rear < SIZE-1){
        dq->rear++;
        dq->arr[dq->rear] = item;
    }
    return 1;
}

int dequeBeg(deque *dq, int *flag){
    int item ;
    //If the deque is empty
    if(dq -> front == -1){
        *flag = 0;
        return 0;
    }
    item = dq->arr[dq->front];
    dq->arr[dq->front] = 0;
    *flag = 1;
    if(dq->front == dq -> rear)
        dq->front = dq->rear = -1;
    else
        dq->front++;
    return item;
}

int dequeEnd(deque *dq, int *flag){
    int item ;
    //If the deque is empty
    if(dq -> front == -1){
        *flag = 0;
        return 0;
    }
    item = dq->arr[dq->rear];
    dq->arr[dq->rear] = 0;
    *flag = 1;
    if(dq->front == dq -> rear)
        dq->front = dq->rear = -1;
    else
        dq->rear--;
    return item;
}

void display(deque dq){
    int i;
    if(dq.front == -1){
        printf("The deque is empty!\n");
    }
    printf("\nQueue elements : ");
    for(i = (dq.front); i<=(dq.rear); i++)
        printf("%i ", dq.arr[i]);

    printf("\n");
}
