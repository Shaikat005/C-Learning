#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=1;
    cin>>n;
    int i;
    char a[n];
    for(i=0;i<2*n;i++)
        cin>>a[i];
    for(i=1;i<2*n-1;i=i+2)
    {
        if(a[i]==a[i+1])
            count++;
    }
    cout<<count;
}
