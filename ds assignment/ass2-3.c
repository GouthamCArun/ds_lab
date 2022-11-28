#include <stdio.h>
void main()
{	
	struct mat1{
	
		int row;
		int col;
		int val;
		}mat[10];
	int i,x,r,c;
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
	s=(((r*c)-x)/(float)(r*c));
	printf("%f",s);
}