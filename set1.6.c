#include <stdio.h>
#include<string.h>
int main(void) 
{
	char s1[50],s2[50];
	int i,j,f=1,u,v;
	scanf("%s %s",s1,s2);
	int l1=strlen(s1);
	int l2=strlen(s2);
	if(l1==l2)
	{
	for(i=0;i<l1;i++)
	{
		for(j=i+1;j<l2;j++)
		{
			u=s1[i]-s1[j];
			v=s2[i]-s2[j];
			if(u==v)
			{
				f=0;
			}
			else
			{
				f=1;
				break;
			}
		}
	}
	}
	else
	{
		printf("\nno");
	}
	if(flag==1)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}

	return 0;
}
