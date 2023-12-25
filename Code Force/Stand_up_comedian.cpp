#include<iostream>
using namespace std;
int main()
{
    int t,a1,a2,a3,a4,sum,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        sum=0;
        cin>>a1;
        cin>>a2;
        cin>>a3;
        cin>>a4;
        if(a1>0 && a4>0 && a1<a4 )
            sum=(2*min(a2,a3))+2*a1+1;
        else if(a1>0 && a4>0 && a1>a4)
            sum=(2*min(a2,a3)+2*a4+(a1-a4));
        else if(a1==0 && a4>0)
            sum=(2*min(a2,a3)+1);
        else if(a1>0 && a4==0)
            sum=(2*min(a2,a3)+a1);
        cout<<sum;
    }
}
