/* Program to illustrates the working of a queue when implemented using pointers */
#include<stdio.h>
#include<stdlib.h>

void init(int *head, int *tail);
void enqueue(int *q,int *tail, int element);
int dequeue(int *q,int *head);
int empty(int head,int tail);
int full(int tail,const int size);
void display(int *q,int head,int tail);

int main(){
    const int SIZE = 5; /* queue's size */
    int head, tail, element;
    int queue[SIZE];
 
    init(&head,&tail);
 
    printf("--Enqueue elements--\n");
    /* push elements into stack */
    while(!full(tail,SIZE)){
        printf("Enter a number to enqueue:");
        scanf("%d",&element);
 
        enqueue(queue,&tail,element);
 
        display(queue,head,tail);
    }
    printf("Queue is full\n\n");
 
    printf("--Dequeue elements --\n");
    while(!empty(head,tail)){
        element = dequeue(queue,&head);
        printf("dequeue element %d \n",element);
 
        display(queue,head,tail);
    }
    printf("Queue is empty\n");
    return 0;
}

void init(int *head, int *tail)
{
    *head = *tail = 0;
}
 
/*
   enqueue an element
   precondition: the queue is not full
*/
void enqueue(int *q,int *tail, int element){
    q[(*tail)++] = element;
}
 
/*
    dequeue an element
    precondition: queue is not empty
*/
int dequeue(int *q,int *head)
{
    return q[(*head)++];
}
 
/*
    return 1 if queue is full, otherwise return 0
*/
int full(int tail,const int size){
    return tail == size;
}
 
/*
  return 1 if the queue is empty, otherwise return 0
*/
int empty(int head, int tail){
    return tail == head;
}
 
/*
  display queue content
*/
void display(int *q, int head, int tail){
    int i = tail - 1;
    while(i >= head)
        printf("%d ",q[i--]);
    printf("\n");
}



