#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,i,R=0;
    char st[20];
    cin>>n;
    for(i=0; i<n; i++)
    {
        scanf("%s",st);
        if(strcmp(st,"X++")==0 || strcmp(st,"++X")==0)
            R++;
        else if(strcmp(st,"X--")==0 || strcmp(st,"--X")==0)
            R--;
    }
    cout<<R;
}
