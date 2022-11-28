#include <stdio.h>

int stack[100];
int top=-1;

void converttobi(int dec)
{
    while (dec!=0)
    {
    stack[++top]=dec%2;
    dec=dec/2;
    }
    printf("\nThe binary number is:\n");

    while(top!=-1)
    {
        printf("%d" , stack[top]);
        top--;
    }
    printf("\n");
}
void converttohex(int dec)
{
    stack[++top]=dec%16;
    dec=dec/16;
    
    printf("\nThe hexadecimal number is:\n");

    while(top!=-1)
    {
        if (stack[top]==10)
        {
            printf("A");
            top--;
        }
        else if (stack[top]==11)
        {
            printf("B");
            top--;
        }
        else if(stack[top]==12)
        {
            printf("C");
            top--;
        }
         else if (stack[top]==13)
        {
            printf("D");
            top--;
        }
         else if (stack[top]==14)
        {
            printf("E");
            top--;
        }
         else if (stack[top]==15)
        {
            printf("F");
            top--;
        }
        else 
        {
            printf("%d",stack[top]);
            top--;
        }

    }
    printf("\n");
}
void main()
{
    int dec;
    printf("enter num");
    scanf("%d",&dec);
    converttohex(dec);
    converttobi(dec);
}