#include<iostream>
#include<cstring>
#include<cctype>
#include<conio.h>
using namespace std;
int main()
{
    int i;
    int sum1=0,sum2=0;
    string st1,st2;
    cin>>st1;
    cin>>st2;
    for(i=0; st1[i]!='\0'; i++)
    {
        st1[i]=tolower(st1[i]);
        st2[i]=tolower(st2[i]);
    }

    if(st1==st2)
        cout<<"0"<<endl;
    else
    {
        for(i=0;st1[i]!='\0';i++)
        {
            if(st1[i]>st2[i]){
                cout<<"1"<<endl;
                break;
            }
            else if(st1[i]<st2[i])
            {
                cout<<"-1"<<endl;
                break;
            }
        }
    }
}
