#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0;
    cin>>n;
    if(n%2==0)
        cout<<n/2;
    else
        cout<<-((n/2)+1);
}
