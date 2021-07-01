#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10],b[10];
int i,count=0;
clrscr();
printf("enter the word\n");
gets(a);
for(i=0;a[i];i++)
{
b[i]=a[i];
count++;
}
b[i]=a[i];
printf("copied string is %s \n",b);
printf("its length is %d\n",count);
getch();
}