#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
struct node*top=NULL;

int empty()
{
 return top==NULL;
}
void push(int data)
{
 struct node*newnode=(struct node*)malloc(sizeof(struct node));
 if(newnode==NULL)
 {
  printf("Stack Overflow\n");
  return;
 }
 newnode->data=data;
 newnode->next=top;
 top=newnode;
 printf("%d pushed\n",data);
}
int pop()
{
 struct node* temp;
 int var;
 if(empty())
  {
  printf("Underflow\n");
  return -1;
  }
 temp=top;
 var=temp->data;
 top=top->next;
 free(temp);
 return var;
}
int peek()
{
 if(empty())
 return -1;
 return top->data;
}
void main()
{
 push(10);
 push(20);
 push(30);
 clrscr();
 printf("top=%d\n",peek());
 printf("%d popped\n",pop());
 printf("%d popped\n",pop());
 getch();
}
