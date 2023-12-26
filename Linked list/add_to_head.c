#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};

struct node* add_beg(struct node *head,int d)
{
    struct node *new=malloc(sizeof(struct node));
    new->data=d;
    new->link=NULL;

    new->link=head;
    head=new;
    return head;
};

int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=98;
    ptr->link=NULL;
    head->link=ptr;
    printf("Before adding:\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d  ",ptr->data);
        ptr=ptr->link;
    }

    int data;
    printf("\nEnter the data to be added:");
    scanf("%d",&data);
    printf("After adding:\n");
    head=add_beg(head,data);
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d  ",ptr->data);
        ptr=ptr->link;
    }
}
