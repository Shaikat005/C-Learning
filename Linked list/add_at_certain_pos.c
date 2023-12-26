#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void add_at_pos(struct node* head,int data,int pos)
{
    struct node *ptr=head;
    struct node *new=malloc(sizeof(struct node));
    new->data=data;
    new->link=NULL;

   pos--;
    while(pos!=1)
    {
        ptr=ptr->link;
        pos--;
    }
    new->link=ptr->link;
    ptr->link=new;
}

int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *first=malloc(sizeof(struct node));
    first->data=46;
    first->link=NULL;
    head->link=first;

    struct node *second=malloc(sizeof(struct node));
    second->data=47;
    second->link=NULL;
    first->link=second;

    int data,position;
    printf("Enter the data to be added and the position:");
    scanf("%d %d",&data,&position);
    struct node *ptr=head;
    printf("Before adding the element:\n");
    while(ptr !=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    printf("\nAfter adding the element:\n");
    add_at_pos(head,data,position);
    ptr=head;
    while(ptr !=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}
