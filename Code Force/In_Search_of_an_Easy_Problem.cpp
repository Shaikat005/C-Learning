#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,count=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            count++;
            break;
        }
    }
    if(count==0)
        cout<<"EASY";
    else
        cout<<"HARD";
}
