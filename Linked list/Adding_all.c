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

struct node* add_head(struct node *head,int data)
{
        struct node *new=malloc(sizeof(struct node));
        new->data=data;
        new->link=NULL;

        new->link=head;
        head=new;
        return head;
};

void add_at_pos(struct node *head,int pos,int data,int n)
{
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
}

int main()
{

    //creating the linked list dynamically:
    struct node *head=malloc(sizeof(struct node));
    printf("Enter the value of head:");
    scanf("%d",&head->data);
    head->link=NULL;
    printf("\nEnter the number of elements:");
    int n,data;
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=1; i<n; i++)
    {
        scanf("%d",&data);
        create(head,data);
    }
    struct node *ptr=head;
    printf("The linked list:\n");
    while(ptr!=NULL)
    {
        printf("%d  ",ptr->data);
        ptr=ptr->link;
    }

    //adding elements at any position:
    int position,value;
    printf("\nEnter the position and the data:\n");
    scanf("%d %d",&position,&value);
    if (position==1)
        head=add_head(head,value);
    else
        add_at_pos(head,position,value,n);
    printf("After adding the element:\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d  ",ptr->data);
        ptr=ptr->link;
    }
}
