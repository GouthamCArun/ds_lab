#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
	};
	
struct node* front=NULL;
struct node* rear=NULL;

void enque(int value)
{
	struct node *Newnode=(struct node*)malloc(sizeof(struct node));
	if (front==NULL && rear==NULL)
	{
		Newnode->data=value;
		front=rear=Newnode;
		
	}
	else
	{
		Newnode->data=value;
		rear=Newnode;
	
	}
}
void deque()
{
	printf("deleted ele is %d",front->data);
	front=front->next;

}
void display()
{
	struct node *temp;
	temp=front;
	while (temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
	
void main()
{
	int ch,c=1;
	while (c==1)
	{
	printf("1.push\n");
	printf("2.pop\n");
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
	printf("\n do u want to contine;");
	scanf("%d",&c);
	}
}
