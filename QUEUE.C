#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
 int data;
 struct Node*next;
};
struct Queue
{
 struct Node*front;
 struct Node*rear;
};
void initQueue(struct Queue*q)
{
 q->front=NULL;
 q->rear=NULL;
}
int isEmpty(struct Queue*q)
{
 return(q->front==NULL);
}
void enqueue(struct Queue*q,int value)
{
 struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
 if(newNode==NULL)
 {
  printf("Heap Overflow\n");
  return;
 }
 newNode->data=value;
 newNode->next=NULL;
 if(q->rear==NULL)
 {
  q->front=q->rear=newNode;
  return;
 }
 q->rear->next=newNode;
 q->rear=newNode;
}
void dequeue(struct Queue*q)
{
 struct Node*temp;
 if(isEmpty(q))
 {
  printf("Queue Underflow\n");
  return;
 }
temp=q->front;
printf("Deleted Element=%d\n",temp->data);

q->front=q->front->next;

if(q->front==NULL)
 q->rear=NULL;
 free(temp);
}
void peek(struct Queue*q)
{
 if(isEmpty(q))
 {
  printf("Queue is empty\n");
  return;
 }
printf("Front element:%d\n",q->front->data);
}
void display(struct Queue*q)
{
struct Node*temp;
 if(isEmpty(q))
 {
  printf("Queue is Empty.\n");
  return;
 }

 temp=q->front;
 printf("Queue Elemets.");
 while(temp!=NULL)
 {
  printf("%d->",temp->data);
  temp=temp->next;
 }
 printf("NULL\n");
}
void main()
{
 struct Queue q;
 initQueue(&q);
 enqueue(&q,10);
 enqueue(&q,20);
 enqueue(&q,30);
 display(&q);
 dequeue(&q);
 display(&q);
 peek(&q);
 getch();
}



