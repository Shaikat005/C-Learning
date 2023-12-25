#include<bits/stdc++.h>
using namespace std;
int main()
{
    int S1,S2,S3,S4,count=0,i,j;
    cin>>S1>>S2>>S3>>S4;
    int a[4];
    a[0]=S1;
    a[1]=S2;
    a[2]=S3;
    a[3]=S4;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[i]==a[j] && a[i]!=-1 && a[j]!=-1){
                count++;
                a[j]=-1;
            }
        }
    }
    cout<<count;
}
