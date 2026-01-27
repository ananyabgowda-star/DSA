#include<stdio.h>
#include<conio.h>
struct Student{
int roll;
char name[20];
int marks;
};
void main(){
struct Student s;
struct Student*ptr;
ptr=&s;
clrscr();
printf("Enter Roll No:");
scanf("%d",&ptr->roll);
printf("Enter name:");
scanf("%s",&ptr->name);
printf("Enter marks:");
scanf("%d",&ptr->marks);
printf("Name:%s \n Roll:%d \n Marks:%d \n",s.name,s.roll,s.marks);
}