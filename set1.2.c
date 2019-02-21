#include<stdio.h>
void main()
{
int n,fact=1,i;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("%d",fact);
getch();
}
