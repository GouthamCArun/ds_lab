#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size];
int astack[size];
int top=-1,atop=-1;

void push()
{
	int item;
	printf("enter ele");
	scanf("%d",&item);
	if (top>=size)
	{
		printf("stack is full");
	}
	else if (top==-1)
	{
		astack[++atop]=item;
	
	}
	else if (item<astack[atop])
	{
		astack[++atop]=item;

	}
	stack[++top]=item;

}
void pop()
{

	if (top==-1)
	{
		printf("its empty");
	}
	else
	{
		if (stack[top]==astack[atop])
		{
			atop=atop-1;
		}
	}
	top=top-1;
}
void getmin()
{
	if (top==-1)
	{
		printf("empty stack");

	}
	else {
		printf("%d",astack[atop]);
	}
}
void display()
{
	if (top==-1)
	{
		printf("noting");

	}
	else {
		for(int i=top;i>=0;i--)
		{
			printf("%d",stack[i]);
			printf("\t");
		}
	}
}
void main()
{
	int stack[size];
	int astack[size];
	int top=-1,atop=-1;
	int ch,c=1;
	while (c==1)
	{

	printf("1.push");
	printf("\n");
	printf("2.pop");
	printf("\n");
	printf("3.getmin");
	printf("\n");
	printf("4.display");
	printf("\n");
	printf("enter choice");
	scanf("%d",&ch);
	if (ch==1)
	{
		push();
	}
	else if (ch==2)
	{
		pop();
	}
	else if (ch==3)
	{
		getmin();
	}
	else if(ch==4)
	{
		display();
	}
	else
	{
		printf("invalid choice");
	}
	printf("do yo want to continue");
	scanf("%d",&c);
	}
	

}