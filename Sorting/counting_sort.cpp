#include<iostream>
using namespace std;
int main()
{
    int a[]= {1,2,4,3,0,2,1,7,1,4,3,0},i,n=sizeof(a)/sizeof(a[0]),R=7;
    int count[R+1],output[n];
    for(i=0; i<n; i++)
    {
        count[a[i]]++;
    }
    for(i=1; i<=R; i++)
        count[i]+=count[i-1];
    for(i=n-1; i>=0; i--)
    {
        output[count[a[i]]-1]=a[i];
        --count[a[i]];
    }
    for(i=0; i<n; i++)
        a[i]=output[i];
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";
}
