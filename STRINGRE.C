#include<stdio.h>
#include<conio.h>
#include<string.h>
void reverse(char str[30])
{
int i,j;
unsigned int len;
char temp;
len=strlen(str);
for(i=len-1;i>=0;i--)
{
for(j=0;j<i;j++)
{
temp=str[j];
str[j]=str[j+1];
str[j+1]=temp;
}
}
printf("the reversed word is %s\n",str);
}
void main()
{
char str[30];
clrscr();
printf("enter the word\n") ;
gets(str);
reverse(str);
getch();
}
