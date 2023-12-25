#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"enter the size of the array: ";
    cin>>n;
    int a[n],i,j;
    cout<<"Enter the array:"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    int sum;
    cout<<"Enter the value of sum:";
    cin>>sum;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==sum){
                count++;
                cout<<"Pair: "<<a[i]<<"+"<<a[j]<<endl;
            }
        }
    }

    if(count==0)
        cout<<"No pair possible.";
}
