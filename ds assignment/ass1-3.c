#include <stdio.h>
void main()
{
	int i,n,c=0,j,k,y,co=1;
	char s[10],t;
	printf("enter string");
	scanf("%s",s);
	printf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		c+=1;
	}
	
	for(j=0;j<c-1;j++)
	{
		for(k=0;k<c-j-1;k++)
		{
		if (s[k]>s[k+1])
		{
			t=s[k];
			s[k]=s[k+1];
			s[k+1]=t;
			
			
		}
		}
	}

	printf("\n");
	
	for(y=0;y<c;y++)
	{
		if (s[y]==s[y+1])
		{
		co+=1;
		}
		else
		{
		printf("%c-%d",s[y],co);
		co=1;
		printf("\n");
		}
	}
	
}