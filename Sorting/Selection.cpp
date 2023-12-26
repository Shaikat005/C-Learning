#include<iostream>
using namespace std;
int main()
{
    int i,n,j,min,temp;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];

    for(i=0; i<n-1; i++)
    {
        min=i;
        for(j=i+1; j<n; j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }

    for(i=0; i<n; i++)
        cout<<a[i]<<" ";
}
/*
#include<bits/stdc++.h>
using namespace std;
void Selection(int a[],int n)
{
    int i,j,min;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                min=j;
            }
            if(min!=i)
            {
                swap(a[i],a[min]);
            }
        }
    }
}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    Selection(a,n);
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}
*/
