#include<stdio.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top=0;

void push(int x)
{
    struct node *new=malloc(sizeof(struct node));
    new->data=x;
    new->link=top;
    top=new;
}

void pop()
{
    struct node *temp;
    if(top==0)
        printf("The list is empty.");
    else
    {
        temp=top;
        printf("Popped element: %d",top->data);
        top=top->link;
        free(temp);
    }
}

void display()
{
    if(top==0)
        printf("The ;ist is empty.");
    else
    {
        struct node *ptr=top;
        while(ptr!=NULL)
        {
            printf("%d  ",ptr->data);
            ptr=ptr->link;

        }
    }
}

int main()
{
    printf("Select an option:\n1 for push()\n2 for pop()\n3 for peek()\n4 for display()\n ");
    int n;

    do
    {
        scanf("%d",&n);
        if(n==1)
        {
            int x;
            printf("Enter the value to push: ");
            scanf("%d",&x);
            push(x);
        }
        else if(n==2)
            pop();
        else if(n==4)
            display();
        else if(n==0)
            printf("Exited!!!");
        else
            printf("Wrong selection");
    }
    while(n!=0);
}
