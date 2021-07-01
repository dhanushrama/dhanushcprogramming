#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char s1[30],s2[30];
unsigned int l1,l2;
int j, i;
clrscr();
printf("enter the first word\n");
scanf("%s",s1);
printf("enter the second word\n");
scanf("%s",s2);
l1=strlen(s1);
for(i=0;s2[i];i++)
{
s1[i+l1]=s2[i];
}
s1[i+l1]=s2[i];

printf("%s",s1);
getch();
}