#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string st;
    cin>>st;
    char temp;
    int i,j;
    for(i=0; st[i]!='\0'; i=i+2)
    {
        for(j=i+2; st[j]!='\0'; j=j+2)
        {
            if(st[i]>st[j])
            {
                temp=st[i];
                st[i]=st[j];
                st[j]=temp;
            }
        }
    }

    cout<<st;
}
