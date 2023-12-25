#include<iostream>
using namespace std;
int main()
{
    int i,n,k;
    cin>>n>>k;
    for(i=1;i<=k;i++)
    {
        if(n%10==0)
        {
            n=n/10;
        }
        else if(n%10!=0)
        {
            n--;
        }
    }
    cout<<n;
}
