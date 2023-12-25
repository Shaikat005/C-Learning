#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,res=0;
    cin>>n;
    string st[n];
    for(int i=0; i<n; i++)
    {
        cin>>st[i];
        if(st[i] == "Tetrahedron")
            res+=4;
        else if(st[i]=="Cube")
            res+=6;
        else if(st[i]=="Octahedron")
            res+=8;
        else if(st[i]=="Dodecahedron")
            res+=12;
        else if(st[i]=="Icosahedron")
            res+=20;
    }

    cout<<res;

}
