#include <stdio.h>
#include <stdlib.h>

void push(int val);
void pop();
void display();
void peak();

struct Node {
    	int data;
    	struct Node *next;  
				};

struct Node* top = NULL;

void main()
	{
	
	

	int ch,c=1;
	while (c==1)
	{
	printf("1.push\n");
	printf("2.pop\n");
	printf("3.display\n");
	printf("4.peak\n");
	printf("enter choice;");
	scanf("%d",&ch);
	if (ch==1)
	{
		int val;
		printf("enter val;");
		scanf("%d",&val);
		push(val);
	}
	else if(ch==2)
	{
		pop();
	}
	else if(ch==3)
	{
		display();
	}
	else if(ch==4)
	{
		peak();
	}
	else
	{
		printf("invalid\n");
	}
	printf("\n do u want to contine;");
	scanf("%d",&c);
	}
	}
void push(int val)
	{
		struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
		newNode->data=val;
		newNode->next=top;
		top=newNode;	
	}
void pop()
	{
		
	    struct Node *temp=NULL;
	    if (top==NULL)
	    {
	    printf("underflow");
	    }
	    else
	    {
		printf("poped value is : ");
		printf("%d",top->data);
		temp=top;
		top=top->next;
	    free(temp);
	    }
	}
void display()
	{	
		struct Node *temp=top;
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
void peak()
	{
		printf("%d",top->data);
	}
