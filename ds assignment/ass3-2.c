#include <stdio.h>

#define MAX 10

int stack[MAX];           
int top1 = -1, top2 = MAX;

void push(int stackNumber, int data)
{
    if (stackNumber == 1) 
    {
        if (top1 == top2 - 1)
                {
            printf("\nStack 1 full");
        }
        else
        {
            stack[++top1] = data;
        }
    }
    else if(stackNumber == 2) 
    {
        if (top2 == top1 + 1) 
        {
            printf("\nStack 2 full");
        }
        else
        {
            stack[--top2] = data;
        }
    }
}


int pop(int stackNumber)
{
    if (stackNumber == 1) 
    {
        if (top1 == -1) 
        {
            printf("\nStack 1 empty");
            return -1;
        }
        return stack[top1--];
    }
    else if(stackNumber == 2) 
    {
        if (top2 == MAX)
        {
            printf("\nStack 2 empty");
            return -1;
        }
        return stack[top2++];
    }
}


void display(int stackNumber)
{
    if (stackNumber == 1) 
    {
        if (top1 == -1)
        {
            printf("\nStack 1 empty");
            return;
        }
        printf("\nElements of stack 1\n");
        for (int i = 0; i <= top1; i++)
            printf("%d ", stack[i]);
    }
    else if(stackNumber == 2) 
    {
        if (top2 == MAX)
        {
            printf("\nStack 2 empty");
            return;
        }
        printf("\nElements of stack 2\n");
        for (int i = MAX - 1; i >= top2; i--)
            printf("%d ", stack[i]);
    }
}

int main()
{
    int sNum, ch, element, popped,co=1;
    while (co==1)
    {
    int sNum, ch, element, popped,co=1;
    printf("\nEnter stack number");
    scanf("%d", &sNum);
    
        printf("\n\nChoose operation");
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Display");
        printf("\n4.Change stack number");
        printf("\nPress any other key to EXIT\n");
        scanf("%d", &ch);
        if (ch==1)
           { printf("\nEnter element to insert ");
            scanf("%d", &element);
            push(sNum, element);
            
           }
        else if (ch==2)
            {
            popped = pop(sNum);
            printf("\nPopped element %d ", popped);
            
            }
        else if (ch==3)
            {display(sNum);
            
            }
        else
        {
            printf("\nEnter stack number (1 or 2): ");
            scanf("%d", &sNum);
        
        }
    printf("do you want to continue");
    scanf("%d",&co);
    }

}