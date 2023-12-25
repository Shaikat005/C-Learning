#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,n;
     cin>>n;
     for(i=1;i<n;i++)
     {
         if(i%2!=0)
            cout<<"I hate that ";
         else if(i%2==0)
            cout<<"I love that ";
     }
     if(n%2==0)
        cout<<"I love it";
     else
        cout<<"I hate it";
}
