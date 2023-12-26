#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};

struct node* add_at_end(struct node *head,int data)
{
    struct node *new=malloc(sizeof(struct node));
    new->data=data;
    new->link=NULL;
    struct node *ptr;
    ptr=head;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=new;
    return new;
};

void del_pos(struct node **head,int position)
{
    struct node *current=*head;
    struct node *previous=*head;
    if(*head==NULL)
        printf("List is already empty!");
    else if(position ==1)
    {
        *head=current->link;
        free(current);
        current=NULL;
    }
    else
    {
        while(position !=1)
        {
            previous=current;
            current=current->link;
            position--;
        }
        previous->link=current->link;
        free(current);
        current=NULL;
    }
}



int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;

    struct node *ptr;
    ptr=head;
    ptr=add_at_end(ptr,20);
    ptr=add_at_end(ptr,30);
    ptr=add_at_end(ptr,40);

    printf("The linked list:\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }

    int position;
    printf("\nEnter the position to be deleted:");
    scanf("%d",&position);
    del_pos(&head,position);
    printf("\nAfter deleting:\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}
