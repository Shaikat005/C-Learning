#include<iostream>
using namespace std;
int main()
{
    int a,b,i=0;
    cin>>a>>b;
    int L=a,B=b;
    while(L<=B)
    {
        L=L*3;
        B=B*2;
        i++;
    }
    cout<<i;
}
