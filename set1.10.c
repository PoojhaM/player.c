#include <stdio.h>
#include<string.h>
int main(void) 
{
	char s1[50],s2[50];
	int i,j,n1,n2,c=0;
	scanf("%s %s",s1,s2);
	n1=strlen(s1);
	n2=strlen(s2);
	if(n1==n2)
	{
		for(i=0;i<n1;i++)
		{
			if(str1[i]==st[i])
			{
				c=c+0;
			}
			else
			{
				c=c+1;
			}
			
		}
      if(c==1)
		{
			printf("\nyes");
		}
		else
		{
			printf("\nno");
		}
	}
	else
	{
		printf("\nno");
	}
	return 0;
}
