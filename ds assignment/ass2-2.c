#include <stdio.h>
#include <math.h>
void main()
{	
	struct poly1{
	
		int pow;
		float coe;
		}terms1[10],terms2[10];
	int i=0,n,k,j,x,g,m,re=0,sum=0;
	printf("enter no.of terms in poly1:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("enter pow");
	scanf("%d",&terms1[i].pow);
	printf("enter coe");
	scanf("%f",&terms1[i].coe);
	
	}
	for(i=0;i<n;i++)
	{
	printf("%.1f(x^%d)",terms1[i].coe,terms1[i].pow);
	printf("+");
	}
	printf("ebter value of x");
	scanf("%d",&x);
	for(k=0;k<n;k++)
	{
	re=terms1[k].coe*(pow(x,terms1[k].pow));
	sum=sum+re;
	}
	printf("%d",sum);
	
}