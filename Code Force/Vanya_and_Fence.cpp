#include<iostream>
using namespace std;
int main()
{
    int n,h,i,sum=0;
    cin>>n>>h;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=h)
        {
            sum++;
        }
        else
            sum=sum+2;
    }
    cout<<sum;
}
