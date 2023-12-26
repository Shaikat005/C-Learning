#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
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

    struct node *third=malloc(sizeof(struct node));
    third->data=48;
    third->link=NULL;
    second->link=third;

    int count=0;
    if(head==NULL)
        printf("The pointer is empty.");
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        count++;
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
    printf("%d\n",count);
}


