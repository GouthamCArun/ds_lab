#include <stdio.h>
void main()
{	
	struct mat1{
	
		int row;
		int col;
		int val;
		}mat1[10],mat2[10],mat3[10];
	int i,x,r,c,y,r1,r2,c1,c2,v1,v2,v=0,j;
	int k=1,f=0;
	
	printf("enter no.of rows of m1");
	scanf("%d",&r);
	mat1[0].row=r;
	
	printf("enter no.of col of m1");
	scanf("%d",&c);
	mat1[0].col=c;
	
	
	printf("enter no.of non zero values of m1");
	scanf("%d",&x);
	mat1[0].val=x;
	
	for(i=1;i<=x;i++)
	{
	printf("enter row num");
	scanf("%d",&mat1[i].row);
	
	printf("enter col num");
	scanf("%d",&mat1[i].col);
	
	
	printf("enter values");
	scanf("%d",&mat1[i].val);
	
	}
	for(i=0;i<=x;i++)
	{
	
	printf("%d",mat1[i].row);
		printf("\t");

	
	printf("%d",mat1[i].col);
		printf("\t");

	
	printf("%d",mat1[i].val);
	printf("\n");
	
	}
	
		printf("enter no.of rows of m2");
	scanf("%d",&r);
	mat2[0].row=r;
	
	printf("enter no.of col of m2");
	scanf("%d",&c);
	mat2[0].col=c;
	
	
	printf("enter no.of non zero values of m2");
	scanf("%d",&y);
	mat2[0].val=y;
	
	for(i=1;i<=y;i++)
	{
	printf("enter row num");
	scanf("%d",&mat2[i].row);
	
	printf("enter col num");
	scanf("%d",&mat2[i].col);
	
	
	printf("enter values");
	scanf("%d",&mat2[i].val);
	
	}
	for(i=0;i<=y;i++)
	{
	
	printf("%d",mat2[i].row);
		printf("\t");

	
	printf("%d",mat2[i].col);
		printf("\t");

	
	printf("%d",mat2[i].val);
	printf("\n");
	
	}
	if (mat1[0].row==mat2[0].row && mat1[0].col==mat2[0].col)
	{
		mat3[0].row=mat2[0].row;
		mat3[0].col=mat2[0].col;
		for(i=1;i<=x;i++)
		{int f=0,v=0;	
		for(j=1;j<=y;j++)
		{
		
			r1=mat1[i].row;
			c1=mat1[i].col;
			v1=mat1[i].val;
			
			r2=mat2[j].row;
			c2=mat2[j].col;
			v2=mat2[j].val;
		
			if (r1==r2 && c1==c2)
			{
				v=(v1+v2);
				mat3[k].row=r1;
				mat3[k].col=c1;
				mat3[k].val=v;
				k+=1;
				f=1;
				break;
			
			}
		}
		if (f==0)
		{
			mat3[k].row=r1;
			mat3[k].col=c1;
			mat3[k].val=v1;
			k+=1;
			
			
		}
		
		}
		for(i=1;i<=y;i++)
		{int fl=0;
		for(j=1;j<k;j++)
		{
		if (mat3[j].row==mat2[i].row && mat3[j].col==mat2[i].col)
		{
			
			fl=1;
			
		}
		}
		if (fl==0)
		{	mat3[k].row=mat2[i].row;
			mat3[k].col=mat2[i].col;
			mat3[k].val=mat2[i].val;
			k+=1;
			 
		}
		}
		
		
	}
	else{printf("cannot add");}
	printf("\n");
	printf("%d",k);
	printf("\n");
	mat3[0].val=(k-1);
	for(i=0;i<k;i++)
	{
	
	printf("%d",mat3[i].row);
		printf("\t");

	
	printf("%d",mat3[i].col);
		printf("\t");

	
	printf("%d",mat3[i].val);
	printf("\n");	
		
	}
}