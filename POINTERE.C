#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10];
char *p;
int i;
clrscr();
printf("enter the word\n");
gets(a);
for(i=0;a[i];i++)
{
}
     printf("the reversed string is\n");
for(p=a+i-1;p>=a;p--)
{
printf("%c",*p);
}
getch();
}