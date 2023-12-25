#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,k,i,a[60];
    cin>>n;
    cin>>k;
    for(i=0;i<n;i++)
        cin>>a[i];
    int count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>=a[k-1]  && a[k-1]>0)
            count++;
    }
    cout<<count;
}

