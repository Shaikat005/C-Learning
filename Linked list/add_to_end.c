#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void add_to_end(struct node *head, int data)
{
    struct node *ptr,*new;
    new=malloc(sizeof(struct node));
    new->data=data;
    new->link=NULL;

    ptr=head;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=new;
}
int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=50;
    head->link=NULL;

    struct node *first=malloc(sizeof(struct node));
    first->data=61;
    first->link=NULL;
    head->link=first;

    struct node *second=malloc(sizeof(struct node));
    second->data=51;
    second->link=NULL;
    first->link=second;

    struct node *third=malloc(sizeof(struct node));
    third->data=52;
    third->link=NULL;
    second->link=third;

    printf("Before adding: ");
    struct node *ptr;
    int count=0;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d  ",ptr->data);
        ptr=ptr->link;
    }

    printf("\nEnter the value to be added: ");
    int value;
    scanf("%d",&value);
    add_to_end(head,value);
    printf("\nAfter adding:\n");
        ptr=head;
    while(ptr!=NULL)
    {
        printf("%d  ",ptr->data);
        ptr=ptr->link;
    }
}
