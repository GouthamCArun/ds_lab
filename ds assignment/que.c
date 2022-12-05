#include <stdio.h>
#define maxsize 5
int front=-1,rear=-1;
void enque(int item);
void deque();
void display();

int que[maxsize];

void enque(int item)
{
	if (rear==maxsize-1)
		printf("que is full");
	
	else if (front==-1 && rear==-1)
	{
		front=0;
		que[++rear]=item;
	}
	else
	{
		que[++rear]=item;
	}
}
void deque()
{
	if (front==-1)
	{
		printf("empty");
	}
	else
	{
		printf("deleted iteam is %d",que[front++]);
		
	}
	
}
void display()
{
	if (front==-1)
	{
		printf("empty");
	}
	else
	{
		int i;
		for(i=front;i<=rear;i++)
		{
			printf("%d \t",que[i]);
		}
		
	}
	
}
void main()
{
	
	int ch,c=1;
	while (c==1)
	{
	printf("1.enque\n");
	printf("2.deque\n");
	printf("3.display\n");

	printf("enter choice;");
	scanf("%d",&ch);
	if (ch==1)
	{
		int val;
		printf("enter val;");
		scanf("%d",&val);
		enque(val);
	}
	else if(ch==2)
	{
		deque();
	}
	else if(ch==3)
	{
		display();
	}

	else
	{
		printf("invalid\n");
	}
	printf("do u want to contine;");
	scanf("%d",&c);
	}
	


}







