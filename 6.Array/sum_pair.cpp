#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,j,sum;
    cout<<"Enter the no. of elements in the array: ";
    cin>>n;
    int a[n];
    cout<<"\nEnter the array: ";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter sum: ";
    cin>>sum;
    int count=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[i]+a[j])==sum)
            {
                count++;
                cout<<"Pair:("<<a[i]<<"+"<<a[j]<<")"<<endl;
            }
        }
    }
    if(count==0)
        cout<<"No pair.";
}
