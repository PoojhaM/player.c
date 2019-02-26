#include <stdio.h>
#include<string.h>
int main(void) 
{
	char s1[50];
	int i,l;
	scanf("%[^\n]s",s1);
	l=strlen(s1);
	if(s1[0]>91)
	{
		s1[0]=s1[0]-32;
	}
	for(i=0;i<l;i++)
		{
			if(s1[i]==' ')
			{
				if(s1[i+1]>91)
				{
					s1[i+1]=s1[i+1]-32;
				}
			}
		}
	printf("%s",s1);
	return 0;
}
