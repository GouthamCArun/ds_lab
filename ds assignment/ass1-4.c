#include <stdio.h>
void rotatel(int a[],int n,char d,int t);

void main()
{	
	int a[10],b[10],c[10];
	int i,n,j,t,k,l,m,r,f=0,p,q;
	
	
	
	printf("enter no.of eele for a");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\n");
	printf("enter no.of eele for b");
		scanf("%d",&m);
	
	for(k=0;k<m;k++)
	{
		scanf("%d",&b[k]);
	}
	printf("common ele : ");
	for(i=0;i<n;i++)
	{
		for(k=0;k<m;k++)
		{
		if (a[i]==b[k])
		{
			printf("%d ",a[i]);
		}
		}
	}
	
	
			
			
	
	
}