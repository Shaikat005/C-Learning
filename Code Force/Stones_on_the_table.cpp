#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,j,k,count,n;
    cin>>n;
    char st[n];
    for(i=0; i<n; i++)
        cin>>st[i];
    k=0;
    i=0;
    while( st[i]!='\0')
    {
        if(st[i]==st[i+1])
        {
            k=i;
            j=i+1;
            while(st[j]!='\0')
            {
                st[j]=st[j+1];
                j++;
            }
            count++;
            i=k;
        }
        else
            i++;
    }
    cout<<count;
}

