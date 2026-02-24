#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head=NULL;
void insert_at_beginning(int data)
{
struct node *newnode,*temp;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=data;
if(head==NULL)
{
newnode->next=newnode;
head=newnode;
}
else
{
temp=head;
while(temp->next!=head)
{
temp=temp->next;
}
newnode->next=head;
temp->next=newnode;
head=newnode;
}
}
void traverse()
{
struct node *temp;
if(head==NULL)
{
printf("List is empty\n");
}
else
{
temp=head;
do
{
print("%d",temp->data);
temp=temp->next;
}
while(temp!=head);
printf("\n");
}
}
void main()
{
clrscr();
insert_at_beginning(10);
insert_at_beginning(20);
insert_at_beginning(30);
traverse();
getch();
}