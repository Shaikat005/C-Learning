#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};

struct node* add_at_beg(struct node *head,int data)
{
    struct node *new=malloc(sizeof(struct node));
    new->data=data;
    new->link=head;
    head=new;
    return head;
};

struct node* dlt_at_beg(struct node *head)
{
    if(head==NULL)
        printf("Empty.");
    else
    {
        struct node *temp=head;
        head=head->link;
        free(temp);
        temp=NULL;
        return head;
    }
} ;

void dlt_at_end(struct node *head)
{
    struct node *temp=head;

    if(head==NULL)
        printf("Empty");
    else if(head->link==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
        while(temp->link->link!=NULL)
        {
            temp=temp->link;
        }
        free(temp->link);
        temp->link=NULL;
    }
}

int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    head=add_at_beg(head,50);
    head=add_at_beg(head,65);
    head=add_at_beg(head,75);

    struct node *ptr=head;
    printf("Before deleting any element:\n");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }

    head=dlt_at_beg(head);
    dlt_at_end(head);
    printf("\nAfter deleting from the beginning and the end:\n ");
    ptr=head;
    if(head==NULL)
        printf("Empty");
    else
    {
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->link;
        }
    }
}
