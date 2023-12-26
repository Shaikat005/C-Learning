#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    cout<<"The array: \n";
    for(i=0; i<n; i++)
        cout<<a[i]<<"   ";

    for(i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }

    cout<<"\n";
    for(i=0; i<n; i++)
        cout<<a[i]<<"   ";
}
