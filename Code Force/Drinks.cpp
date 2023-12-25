#include<bits/stdc++.h>
using namespace std;
int main()
{
    double sum=0;
    int n;
    cin>>n;
    double a[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<sum/n;
}
