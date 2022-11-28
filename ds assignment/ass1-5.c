#include<stdio.h>
#include<math.h>
void main()
{	
	double a[10][4];
	int i,n,j,t,k,l,m,r,f=0,p,q;
	double sum=0;
	printf("enter no.of digits");
	scanf("%d",&n);
	
	
	for(j=0;j<n;j++)
	{
		for(i=0;i<4;i++)
		{
			scanf("%lf",&a[j][i]);
		}
	}
	

	
	for(i=0;i<n;i++)
	{
	sum=(a[i][0]*pow(2,3))+a[i][1]*pow(2,2)+a[i][2]*pow(2,1)+a[i][3]*pow(2,0);
	printf("\n");
	if (sum==10)
	{printf("A");}
	else if (sum==11)
	{printf("B");}
	else if (sum==12)
	{printf("C");}
	else if (sum==13)
	{printf("D");}
	else if (sum==14)
	{printf("E");}
	else if (sum==15)
	{printf("F");}
	else
	{printf("%.0f",sum);}
	}
	
}