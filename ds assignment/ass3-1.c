#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size];
int top=-1;
int stfull() {
	if (top >=( size - 1))
	return 1;
	else
	return 0;
}

void push(int item) {
	top++;
	stack[top] = item;
}

int stempty() {
	if (top == -1)
	return 1;
	else
	return 0;
}

int pop() {
	int item;
	item = stack[top];
	top--;
	return (item);
}

void display() {
	int i;
	if (stempty())
	printf("\nStack Is Empty!");
	else {
		for (i = top; i >= 0; i--)
		printf("\n%d", stack[i]);
	}
}

int main()
{
	int item, choice,ch=1;
		while (ch==1)
    {
        printf("\n\n1.Push \n2.Pop \n3.Display \n4.exit\n");
		printf("\nEnter Your Choice : ");
		scanf("%d", &choice);
        
			if (choice==1)
			   { printf("\nEnter The item to be pushed : ");
			    scanf("%d", &item);

			    if (stfull())
				printf("\nStack is Full!");
			    else
				push(item);
			    
               }
			else if (choice==2)
			    {
                    if (stempty())
				    printf("\nEmpty stack!Underflow !!");
			        else {
				    item = pop();
				    printf("\nThe popped element is %d", item);
			        }
			        
                }
			else if (choice==3)
			   { display();
			
               }
			else
			    {printf("invalid choice");}
        printf("do you want to continue");
        scanf("%d",&ch);
        }
    
       
}

 