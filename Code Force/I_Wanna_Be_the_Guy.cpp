#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,i,k,n,p,q,count=0;
    cin>>n;
    cin>>p;
    int a[p];
    for(i=0;i<p;i++)
        cin>>a[i];
    cin>>q;
    int b[q];
    for(i=0;i<q;i++)
        cin>>b[i];
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            if(a[i]==b[j])
                count++;
        }
    }
    int Unique_Level=(p+q)-count;
    if(Unique_Level==n)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
}
