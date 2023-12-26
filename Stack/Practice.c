#include<stdio.h>
#define N 5
int queue[5];
int front=-1;
rear=-1;

void Enqueue(int x)
{
    if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[0]=x;
    }
    else if(rear==N-1)
        printf("Overflow");
    else
    {
        rear++;
        queue[rear]=x;
    }
}

void Dequeue()
{
    if(front==-1 && rear==-1)
        printf("Underflow.");
    else
    {
        printf("%d dequeued!",queue[front]);
        int temp=queue[front];
        front++;
    }
}

void Peek()
{
    if(front==-1 && rear==-1)
        printf("Underflow");
    else
        printf("Peeked element: %d",queue[front]);
}

void Display()
{
    if(front==-1 && rear==-1)
        printf("Empty!!");
    else
    {
        for(int i=front;i<=rear;i++)
            printf("%d  ",queue[i]);
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
