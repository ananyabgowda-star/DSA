#include<stdio.h>
#include<conio.h>
int main()
{
char a[20],b[50];
clrscr();
printf("Enter a string:\n");
scanf("%s",a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0){
printf("It is a palindrome"); }
else
{
printf("Not a palindrome"); }
getch();
return 0;
}