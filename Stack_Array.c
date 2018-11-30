#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int stack[MAX];
int top=-1;
void push(int val)
{
    if(top==MAX-1)
    {
        printf("\nStack is full\n");
        return;
    }
    stack[++top]=val;
    printf("\nValue Inserted\n");
}
int pop()
{
    if(top==-1)
    {
        printf("\nStack is empty\n");
        return -1;
    }
    int val=stack[top--];
    return val;
}
int peek()
{
    if(top!=-1)
        return stack[top];

        printf("\nStack is empty\n");
        return -1;
}
int main()
{
    int val,ch;
    while(1)
    {
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Peek");
        printf("\n4.Exit");
        printf("\nEnter your choice:- ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nEnter the value to be pushed:- ");
            scanf("%d",&val);
            push(val);
            break;
        case 2:
            val=pop();
            if(val!=-1)
            {
                printf("\nPopped value is %d",val);
            }
            break;
        case 3:
            val=peek();
            if(val!=-1)
            {
                 printf("\nThe topmost value is %d",val);
            }
            break;
        case 4:
            exit(0);
        }
    }
}
