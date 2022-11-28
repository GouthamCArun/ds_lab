#include <stdio.h>
void rotatel(int a[],int n,char d,int t);

void main()
{	
	int a[10];
	int i,n,j,t;
	char k;
	printf("enter l or r");
	scanf("%c",&k);
	
	printf("enter no.of eele");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		printf("%d",a[j]);
	}
	printf("\n");
	printf("entre no.of times to rotate");
	scanf("%d",&t);
	rotatel(a,n,k,t);
	
	
	
	

}
void rotatel(int a[],int n,char d,int t)
{

	if (d=='l')
	{	
	int p,i,m,j,b;
	for(i=0;i<t;i++)
	{
		for(j=0;j<n-1;j++)
		{
			m=a[j];
			a[j]=a[j+1];
			a[j+1]=m;
			
		}
	}
	for(b=0;b<n;b++)
	{
		printf("%d\t",a[b]);
	}
	

	}
	else
	{	
	int p,i,m,j,b;
	for(i=0;i<t;i++)
	{
		for(j=n-1;j>0;j--)
		{
			m=a[j];
			a[j]=a[j-1];
			a[j-1]=m;
			
		}
	}
	for(b=0;b<n;b++)
	{
		printf("%d\t",a[b]);
	}



	}
}