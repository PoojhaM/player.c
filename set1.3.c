#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem=0;
clrscr();
scanf("%d",&n);
while(n>0)
{
rem=n%10;
printf("%d",rem);
n=n/10;
}
getch();
}
