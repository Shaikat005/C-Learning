#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,res=0,left=0;
    cin>>n;

    res=n/100;
    left=n%100;

    res+=left/20;
    left=left%20;

    res+=left/10;
    left=left%10;

    res+=left/5;
    left=left%5;

    res+=left/1;

    cout<<res;
}
