#include<stdio.h>

struct node
{
    int data;
    struct node *link;
}*head;

void create()
{
    int choice=1;
    struct node *newnode,*ptr;
    head=0;
    while(choice)
    {
        newnode=malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->link=0;
        if(head==0)
            head=ptr=newnode;
        else
        {
            ptr->link=newnode;
            ptr=newnode;
        }
        ptr->link=head;
        printf("1 to continue and 0 to exit. ");
        scanf("%d",&choice);
    }
}

void display()
{
    struct node *ptr;
    if(head==0)
        printf("List is empty.");
    else
    {
        ptr=head;
        while(ptr->link !=head)
        {
            printf("%d  ",ptr->data);
            ptr=ptr->link;
        }
        printf("%d",ptr->data);
    }
}

int main()
{
    create();
    printf("The list is:\n");
    display();
}
