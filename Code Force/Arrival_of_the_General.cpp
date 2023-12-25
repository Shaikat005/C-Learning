#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,min_I,max_I,M_C,m_c;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    int min=101,max=0;
    for(i=0; i<n; i++)
    {
        if(a[i]<=min)
        {
            min=a[i];
            min_I=i;
        }
    }

    for(int j=0; j<n; j++)
    {
        if(a[j]>max)
        {
            max=a[j];
            max_I=j;
        }
    }
    if(min_I<max_I)
        cout<<(max_I+(n-2-min_I));
    else
        cout<<(max_I+(n-1-min_I));
}
