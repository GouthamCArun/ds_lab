#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	stuct node *next;
	};
	
struct node front=NULL;
struct node rear=NULL;

void enque(int value)
{
	struct node *Newnode=(struct node*)malloc(sizeof(struct node);
	if (front==NULL && rear==NULL)
	{
		Newnode.data=value;
		front=rear=Newnode;
		
	}
	else
	{
		Newnode.data=value;
		rear=Newnode;
	
	}
}
void deque()
{
	printf("deleted ele is %d",front->data);
	front=front->next;

}

	
