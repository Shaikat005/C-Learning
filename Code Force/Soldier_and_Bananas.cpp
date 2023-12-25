#include<iostream>
using namespace std;
int main()
{
    int k,n,w,i,sum=0;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++)
    {
        sum=sum+(i*k);
    }
    if(sum>n)
        cout<<sum-n;
    else
        cout<<"0";
}
