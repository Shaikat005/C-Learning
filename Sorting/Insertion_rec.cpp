#include<iostream>
using namespace std;
void insertion(int a[],int n)
{
    int i;
    if(n<=1)
        return;
    insertion(a,n-1);
    int temp=a[n-1];
    i=n-2;
    while( i>=0 && a[i]>temp)
    {
        swap(a[i+1],a[i]);
        i--;
    }
    a[i+1]=temp;
}
int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
        cin>>a[i];
    insertion(a,n);
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}
