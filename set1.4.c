#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int i=0,len=0;
clrscr();
gets(a);
len=strlen(a);
for(i=0;i<=len;i++)
{
if(a[i]=='\0')
{
a[i]='.';
}
}
printf("%s",a);
getch();
}
