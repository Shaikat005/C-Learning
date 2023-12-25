#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,i,A=0,D=0;
    cin>>n;
    char st[n];
    for(i=0;i<n;i++)
        cin>>st[i];
    for(i=0;st[i]!='\0';i++)
    {
        if(st[i]=='A')
            A++;
        else if(st[i]=='D')
            D++;
    }
    if(A>D)
        cout<<"Anton";
    else if(A<D)
        cout<<"Danik";
    else if(A==D)
        cout<<"Friendship";
}
