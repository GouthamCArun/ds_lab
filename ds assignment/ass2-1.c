#include <stdio.h>
void main()
{	
	struct poly1{
		int power;
		float coe;
		}terms1[10],terms2[10];
	int i=0,n,k,j=0,g,m=0,l=0,p=0,q=0;
	printf("ebter no of terms in poly1:");
	scanf("%d",&n);
	for(p=0;p<n;p++)
	{
	printf("enter pow");
	scanf("%d",&terms1[p].power);
	printf("enter coe");
	scanf("%f",&terms1[p].coe);
	
	}
	
	printf("ebter no of terms in  poly2:");
	scanf("%d",&k);
	for(q=0;q<k;q++)
	{
	printf("enter pow");
	scanf("%d",&terms2[q].power);
	printf("enter coe");
	scanf("%f",&terms2[q].coe);
	
	}
	for(p=0;p<n;p++)
	{
	printf("%.1f(x^%d)",terms1[p].coe,terms1[p].power);
	printf("+");
	}
	printf("\n");
	for(q=0;q<k;q++)
	{
	printf("%.1f(x^%d)",terms2[q].coe,terms2[q].power);
	printf("+");
	}
	printf("\n");
	

	
	while (i<n && j<k)
	{
		
		if (terms1[i].power==terms2[j].power)
		{
			printf("%.1f",terms1[i].coe+terms2[j].coe);
			printf("x^%d",terms1[i].power);
			printf("+");
			i+=1;
			j+=1;
		}
	
		else if (terms1[i].power>terms2[j].power)
		{
			printf("%.1f",terms1[i].coe);
			printf("x^%d",terms1[i].power);
			printf("+");
			i+=1;
			
				
		
		}
		else if (terms1[i].power<terms2[j].power)
		{
			printf("%.1f",terms2[j].coe);
			printf("x^%d",terms2[j].power);
			printf("+");
			j+=1;
				
		}
	
		
	}
	while (i<n)
	{
			printf("%.1f",terms1[i].coe);
			printf("x^%d",terms1[i].power);
			printf("+");
			i+=1;
	}
	while (j<k)
	{
			printf("%.1f",terms2[j].coe);
			printf("x^%d",terms2[j].power);
			printf("+");
			j+=1;
				
	}
	
	
	

}