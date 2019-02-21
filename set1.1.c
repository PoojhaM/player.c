#include<stdio.h>
#include<string.h>
void main()
{
int len=0,i;
char a[100];
clrscr();
gets(a);
for(i=0;a[i]!='\0';i++)
{
len++;
}
for(i=len-1;i>=0;i--)
{
printf("%c",a[i]);
}
getch();
}
