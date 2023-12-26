#include<bits/stdc++.h>
using namespace std;

int ara[5];
int top=-1;

void push()
{
    int x;
    cout<<"Enter the element to be inserted:";
    cin>>x;
    if(top==4)
        cout<<"Overflow";
    else
    {
        top++;
        ara[top]=x;
    }
}

void pop()
{
    if(top==-1)
        cout<<"Underflow";
    else
    {
        int temp=ara[top];
        top--;
        cout<<"Popped element is: "<<temp;
    }
}

void display()
{
    if(top==-1)
        printf("Stack is empty,\n");
    else
    {
        int i;
        for(i=top;i>=0;i--)
            cout<<ara[i]<<" ";
    }
}

int main()
{
    cout<<"Select an option:\n1 for push()\n2 for pop()\n3 for peek()\n4 for display()\n ";
    int n;

    do
    {
        cin>>n;
        if(n==1)
            push();
        else if(n==2)
            pop();
        else if(n==4)
            display();
        else if(n==0)
            cout<<"Exited";
        else
            cout<<"Wrong selection";


    }
    while(n!=0);
}
