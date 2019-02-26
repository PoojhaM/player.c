#include <stdio.h>
#include<string.h>
int main(void) {
	char s1[10],t1;
	int i,l;
	scanf("%[^\n]s",s1);
	l=strlen(s);
	if(l%2==0)
	{
	for(i=0;i<l;i+=2)
             {
             t1=s1[i];
             s1[i]=s1[i+1];
             s1[i+1]=t1;
             }
   	 printf("%s",s1);
	}
    else
    {
    for(i=0;i<l;i+=3)
             {
             t1=s1[i];
             s1[i]=s1[i+1];
             s1[i+1]=t;
             }
   	 printf("%s",s1);
	}
	return 0;
}
