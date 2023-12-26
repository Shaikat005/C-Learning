//Implementation of stack using linked list.
#include<stdio.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top=0;
void Push(int x)
{
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}

void Peek()
{
    if(top==NULL)
        printf("The stack is empty.");
    else
        printf("The top element is %d\n",top->data);
}

void Pop()
{
    struct node *temp;
    temp=top;
    if(top==0)
        printf("Underflow.\n");
    else
    {
        printf("Popped element: %d\n",top->data);
        top=top->link;
        free(temp);
    }
}

void Display()
{
    struct node *ptr=top;
    if(ptr==NULL)
        printf("Stack is NULL.");
    else
    {
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->data);
            ptr=ptr->link;
        }
    }
}

int main()
{
    Push(5);
    Push(2);
    Push(4);
    Display();
    Peek();
    Pop();
    Peek();
    Display();
}
