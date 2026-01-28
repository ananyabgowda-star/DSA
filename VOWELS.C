#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20],c;
int i,count=0;
clrscr();
printf("Enter a string:\n");
gets(a);
for(i=0;i<strlen(a);i++)
{
c=tolower(a[i]);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
{
count++;
}
}
printf("No of vowels:%d",count);
getch();
}
