#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,count=0;
    cin>>n;
    for(;n--;)
    {
        cin>>p>>q;
        if((q-p)>=2)
            count++;
    }
    cout<<count;
}
