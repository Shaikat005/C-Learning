#include<stdio.h>
struct node
{
    int data;
    struct node *link;
};
struct node *front=0;
struct node *rear=0;
void enqueue(int x)
{
    struct node *new=malloc(sizeof(struct node));
    new->data=x;
    new->link=NULL;

    if(front==0 && rear==0)
        front=rear=new;
    else
    {
        rear->link=new;
        rear=new;
    }
}

void display()
{
    struct node *ptr;
    if(front==0 && rear==0)
        printf("The list is empty.");
    else
    {
        ptr=front;
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->link;
        }
    }
}

void dequeue()
{
    struct node *ptr=front;
    if(front==0 && rear==0)
        printf("The queue is empty.");
    else
    {
        printf("The dequeued item is %d.",front->data);
        front=front->link;
        free(ptr);
    }
}

void peek()
{
    struct node *ptr=front;
    if(front==0 && rear==0)
        printf("The queue is empty.");
    else
    {
        printf("Peeked item: %d",front->data);
    }
}

int main()
{
    printf("Select any option:\n1 to Enqueue\n2 to dequeue\n3 to Display.\n0 to exit.\n");
    int n;
    do
    {
        scanf("%d",&n);
        if(n==1)
        {
            int x;
            printf("Enter the value to enqueue:");
            scanf("%d",&x);
            enqueue(x);
        }
        else if(n==2)
            dequeue();
        else if(n==3)
            display();
        else if(n==0)
            printf("Exited!!!.");
        else
            printf("Wrong selection.");

    }
    while(n!=0);
}
