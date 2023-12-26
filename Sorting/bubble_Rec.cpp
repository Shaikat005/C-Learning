#include<iostream>
using namespace std;
void bubble(int a[],int endIndex)
{
    int i;
    if(endIndex==0)
        return;
    for(i=0; i<endIndex; i++)
    {
        if(a[i]>a[i+1])
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    bubble(a,endIndex-1);
}


int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];

    bubble(a,n-1);
    cout<<"Bubble sorted array :\n";
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";

    selection(a,0,n);
    cout<<"\n";
    cout<<"Selection sorted array:\n";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}
