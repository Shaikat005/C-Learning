#include<iostream>
using namespace std;
void selection(int a[],int beginIndex,int size)
{
    if(beginIndex>=size-1)
        return;
    int minIndex=beginIndex;
    for(int i=beginIndex; i<size; i++)
    {
        if(a[i]<a[minIndex])
            minIndex=i;
    }
    swap(a[minIndex],a[beginIndex]);
    selection(a,beginIndex+1,size);
}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];

    selection(a,0,n);
    cout<<"\n";
    cout<<"Selection sorted array:\n";
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";
}
