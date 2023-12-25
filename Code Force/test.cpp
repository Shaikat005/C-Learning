#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i;
    cin>>n;
    int a[n];
    for(i=1;i<=n;i++)
        cin>>a[i];
    m=a[1];
    for(i=2;i<=n;i++)
    {
        if(m>a[i])
            m=a[i];
    }
    cout<<m;
}
