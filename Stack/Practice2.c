#include<stdio.h>
struct node
{
    int data;
    struct node *link;
};

struct node *front=0,*rear=0;
void Enqueue(int X)
{
    struct node *new=malloc(sizeof(struct node));
    new->data=X;
    new->link=NULL;
    if(front==0 && rear==0)
        front=rear=new;
    else
    {
        rear->link=new;
        rear=new;
    }

}

void Dequeue()
{
    struct node *ptr=front;
    if(front==0 && rear==0)
        printf("Empty!!");
    else
    {
        front=front->link;
        free(ptr);
    }
}

void Peek()
{
    if(front==0 && rear==0)
        printf("Empty!!");
    else
    {
        printf("Peeked element: %d",front->data);
    }
}

void Display()
{
    struct node *ptr=front;
    while(ptr!=NULL)
    {
        printf("%d  ",ptr->data);
        ptr=ptr->link;
    }
}

int main()
{
    int n;
    printf("Select any option:\n1 to Enqueue\n2 to dequeue\n3 to Display.\n4 to peek()\n0 to exit. ");
    do
    {
        scanf("%d",&n);
        if(n==1)
        {
            printf("Enter the element to enqueue:");
            int x;
            scanf("%d",&x);
            Enqueue(x);
        }

        else if(n==2)
            Dequeue();
        else if(n==3)
            Display();
        else if(n==4)
            Peek();
        else if(n==0)
            printf("Exited!!!");
        else
            printf("Wrong selection.");
    }
    while(n!=0);
}
