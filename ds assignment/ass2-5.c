#include <stdio.h>
void main()
{	
	struct mat1{
	
		int row;
		int col;
		int val;
		}mat[10],mat1[10];
	int i,x,r,c,m,rmin=0,j=1;
	float s;
	printf("enter no.of rows");
	scanf("%d",&r);
	mat[0].row=r;
	
	printf("enter no.of col");
	scanf("%d",&c);
	mat[0].col=c;
	
	
	printf("enter no.of non zero values");
	scanf("%d",&x);
	mat[0].val=x;
	
	for(i=1;i<=x;i++)
	{
	printf("enter row num");
	scanf("%d",&mat[i].row);
	
	printf("enter col num");
	scanf("%d",&mat[i].col);
	
	
	printf("enter values");
	scanf("%d",&mat[i].val);
	
	}
	for(i=0;i<=x;i++)
	{
	
	printf("%d",mat[i].row);
		printf("\t");

	
	printf("%d",mat[i].col);
		printf("\t");

	
	printf("%d",mat[i].val);
	printf("\n");
	}
	printf("\n");
	mat1[0].row=mat[0].col;
	mat1[0].col=mat[0].row;
	mat1[0].val=mat[0].val;
	for(m=0;m<=c;m++)
	{
	
	for(i=1;i<=x;i++)
	{
		if (mat[i].col==m)
		{
			
			mat1[j].row=mat[i].col;
			mat1[j].col=mat[i].row;
			mat1[j].val=mat[i].val;
			j+=1;
			
		}
		
		
	}
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
	
	
	
	
	
}