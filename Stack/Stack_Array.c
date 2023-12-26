//Implementation of stack operations using array:
#include<stdio.h>
int stack[5];
int top=-1;

void Push()
{
    int x;
    printf("Enter the element to push:");
    scanf("%d",&x);
    if(top==4)
        printf("Overflow\n");
    else
    {
        top++;
        stack[top]=x;
    }
}

void Pop()
{
    int temp;
    if(top==-1)
        printf("Underflow\n");
    else
    {
        temp=stack[top];
        top--;
        printf("%d has been removed.\n",temp);
    }
}

void Peek()
{
    if(top==-1)
        printf("Underflow\n");
    else
    {
        printf("%d",stack[top]);
    }
}

void Display()
{
    if(top==-1)
        printf("Stack is empty,\n");
    else
    {
        int i;
        printf("The elements are:\n");
        for(i=top; i>=0; i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}

int main()
{
    int N;
    printf("Enter:\n1 to push\n2 to pop\n3 to peek\n4 to display\n0 to exit.\n");
    do
    {
        scanf("%d",&N);
        if(N==1)
            Push();
        else if(N==2)
            Pop();
        else if(N==3)
            Peek();
        else if(N==4)
            Display();
        else if(N==0)
            printf("Exited!!!\n");
        else
            printf("Wrong selection.\n");
    }while(N!=0);
}
