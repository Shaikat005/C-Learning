#include<stdio.h>
struct node
{
    int data;
    struct node *link;
};

void create(struct node *head,int data)
{
    struct node *ptr=head;
    struct node *new=malloc(sizeof(struct node));
    new->data=data;
    new->link=NULL;

    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=new;
}


struct node*  add_at_beg(struct node *head,int data)
{
    struct node *ptr=head;
    struct node *new=malloc(sizeof(struct node));
    new->data=data;
    new->link=head;
    head=new;
    return head;
}

void add_at_pos(struct node *head,int pos,int data)
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

void del_pos(struct node **head,int pos)
{
    struct node *previous=*head;
    struct node *current=*head;

    if(pos==1)
    {
        *head=current->link;
        free(current);
        current=NULL;
    }
    else
    {
        while(pos!=1)
        {
            previous=current;
            current=current->link;
            pos--;
        }
    }
    previous->link=current->link;
    free(current);
    current=NULL;
}

int main()
{
    struct node *head=malloc(sizeof(struct node));
    printf("Enter the value of head->data: ");
    scanf("%d",&head->data);
    head->link=NULL;
    printf("\nEnter the number of elements of the linked list: ");
    int n,data;
    scanf("%d",&n);
    printf("\nEnter the elements of the linked list:");
    for(int i=0; i<n-1; i++)
    {
        scanf("%d",&data);
        create(head,data);
    }
    printf("The linked list is:\n");
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d   ",ptr->data);
        ptr=ptr->link;
    }

    int pos;
    printf("\nEnter the position to be added: ");
    scanf("%d",&pos);
    printf("\nEnter the data: ");
    scanf("%d",&data);
    if(pos==1)
        head=add_at_beg(head,data);
    else
        add_at_pos(head,pos,data);

    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d   ",ptr->data);
        ptr=ptr->link;
    }

    printf("\nEnter the position to be deleted: ");
    scanf("%d",&pos);
    del_pos(&head,pos);
    printf("\nAfter deleting: \n");
        ptr=head;
    while(ptr!=NULL)
    {
        printf("%d   ",ptr->data);
        ptr=ptr->link;
    }
}
