#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};

struct node* add(struct node *ptr,int data)
{
    struct node *new=malloc(sizeof(struct node));
    new->data=data;
    new->link=NULL;

    ptr->link=new;
    return new;
};

int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=40;
    head->link=NULL;

    struct node *ptr=head;
    ptr=add(ptr,51);
    ptr=add(ptr,52);
    ptr=add(ptr,53);

    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
}
