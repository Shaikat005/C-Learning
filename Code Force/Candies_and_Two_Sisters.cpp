#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k,j,res=0;
    cin>>t;
    int n,a[t];
    for(int i=0;i<t;i++)
        cin>>a[i];
    for(int i=0;i<t;i++)
    {
        if(a[i]==0 || a[i]==1)
            cout<<"0"<<endl;
        else
            cout<<(a[i]-1)/2<<endl;
    }
}
