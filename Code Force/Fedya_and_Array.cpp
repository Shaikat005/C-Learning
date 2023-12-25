#include<iostream>
using namespace std;
int main()
{
    int t,x,y,i;

    cin>>t;
    for(; t--;)
    {
        cin>>x>>y;
        cout<<(2*(x-y-1)+2)<<endl;
        for(i=x; i>=y; i--)
            cout<<i<<" ";
        for(i=y+1; i<x; i++)
            cout<<i<<" ";
        cout<<'\n';
    }
}
