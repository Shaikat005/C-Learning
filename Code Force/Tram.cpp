#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i,a[1000],b[1000],sum=0,max=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
        sum=b[i-1]-a[i]+b[i];
        b[i]=sum;
        if(max<sum)
            max=sum;
    }
    cout<<max;
}
