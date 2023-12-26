#include<bits/stdc++.h>
using namespace std;
int Partition(int a[],int l,int h)
{
    int i=l,j=h;
    int pivot=a[l];
    while(i<j)
    {
        while(a[i]<=pivot)
            i++;
        while(a[j]>pivot)
            j--;
        if(i<j)
            swap(a[i],a[j]);
    }
    swap(a[l],a[j]);
    return j;
}

int QuickSort(int a[],int l,int h)
{
    if(l<h)
    {
        int k=Partition(a,l,h);
        QuickSort(a,k+1,h);
        QuickSort(a,l,k-1);
    }
}

int main()
{
    int n;
    cin>>n;
    int i,a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    int l=0,h=n-1;
    QuickSort(a,l,h);
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}
