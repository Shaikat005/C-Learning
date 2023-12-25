#include<iostream>
#include<cstring>
#include<cctype>>
using namespace std;
int main()
{
    char s[100],u[100],l[100];
    gets(s);
    int i,U=0,L=0;
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            U++;
        else
            L++;
    }
    if(U>L)
    {
        for(i=0; s[i]!='\0'; i++)
        {
            u[i]=toupper(s[i]);
        }
        puts(u);
    }
    else if(L>=U)
    {
        for(i=0; s[i]!='\0'; i++)
        {
            l[i]=tolower(s[i]);
        }
        puts(l);
    }

}
