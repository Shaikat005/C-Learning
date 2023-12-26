//Implementation of queue using array.
#include<stdio.h>
# define N 5
int queue[N];
int front=-1;
int rear=-1;

void Enqueue(int x)
{
    if(rear==N-1)
        printf("Overflow!!!");
    else if(front == -1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }
}


void Dequeue()
{
    if(front==-1 && rear==-1)
        printf("The queue is empty.");
    else if(front==rear)
    {
        printf("Dequeued item: %d",queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("Dequeued item: %d",queue[front]);
        front++;
    }
}

void Display()
{
    int i;
    if(front==-1 && rear==-1)
        printf("The queue is empty.");
    else
    {
        for(i=front; i<=rear; i++)
            printf("%d  ",queue[i]);
    }
}

int main()
{
    printf("Select any option:\n1 to Enqueue\n2 to dequeue\n3 to Display.\n0 to exit. ");
    int n;
    do
    {
        scanf("%d",&n);
        if(n==1)
        {
            int x;
            printf("Enter the value to enqueue:");
            scanf("%d",&x);
            Enqueue(x);
        }
        else if(n==2)
            Dequeue();
        else if(n==3)
            Display();
        else if(n==0)
            printf("Exited!!!.");
        else
            printf("Wrong selection.");

    }
    while(n!=0);
}
