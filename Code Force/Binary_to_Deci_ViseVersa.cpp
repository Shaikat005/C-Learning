#include<bits/stdc++.h>
using namespace std;
void DtoB(long long int n2)
{
    int R,ans=0,i=0,a[100],j,Val=n2;
    while(n2!=0)
    {
        a[i]=n2%2;
        n2=n2/2;
        i++;
    }
    cout<<Val<<" in Binary:"<<endl;
    for(j=i-1;j>=0;j--)
        cout<<a[j];
    cout<<"\n";
}

void BtoD(long long int n1)
{
    int R,ans=0,i=0,Val=n1;
    while(n1!=0)
    {
        R=n1%10;
        ans+=(R*pow(2,i));
        i++;
        n1=n1/10;
    }
    cout<<Val<<" in Decimal:"<<endl;
    cout<<ans<<endl;
}

int main()
{
   long long int n1,n2;
    cout<<"Enter the binary value:";
    cin>>n1;
    cout<<"Enter the decimal value:";
    cin>>n2;
    DtoB(n2);
    BtoD(n1);
}
