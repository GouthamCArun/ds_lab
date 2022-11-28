#include <stdio.h>

void main()
{	
	int a[10];
	int i,n,j,count,t,sum=0,mode,m,ele=0,countmax=0;
	float mean,median;
	
	
	printf("enter no.of eele");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		sum=sum+a[j];
		printf("%d",a[j]);
		
	}
	mean=(float)sum/n;
	printf("mean is");
	printf("%f",mean);
	printf("\n");
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			m=a[j];
			a[j]=a[j+1];
			a[j+1]=m;
		}
	}
	
	
	if(n%2==0)
	{
	median=(a[n/2]+a[(n/2-1)])/2;
	
	}
	else
	{
	median=a[n/2];
	
	}
	printf("%f",median);
	printf("\n");
	
	for(i=0;i<n;i++)
	{	
		count=0;
		
		for(j=i;j<n;j++)
		{
				if (a[i]==a[j])
				{
				count=count+1;
				ele=a[j];
				}
				
		}
		if (count>countmax)
		
		{
			countmax=count;
			mode=ele;	 
		}
	}
	printf("%d",mode);
	
	



}