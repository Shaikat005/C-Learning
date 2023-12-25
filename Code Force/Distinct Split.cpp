#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
    int t,n,i,j,D=0,k,s1=0,s2=0;
    char st[50],st1[50],st2[50];
    cin>>t;
   // for(k=0; k<t; k++)
    //{
        int sum=0;
        cin>>n;
        cin>>st;
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(st[i]==st[j])
                {
                    D=j;
                    break;
                }
            }
            if(D>0) break;
        }
          cout<<"D="<<D<<endl;
        for(i=0; i<D; i++)
        {
            st1[i]=st[i];
        }

        for(j=D,i=0; st[j]!='\0'; j++,i++)
        {
            st2[i]=st[j];
        }
        for(i=0; st1[i]!='\0'; i++)
        {
            s1++;
        }
        int count=0,len=0;
        for(i=0; st2[i]!='\0'; i++)
        {
            len++;
        }
        for(i=0; st2[i]!='\0'; i++)
        {
            for(j=i+1; st2[j]!='\0'; j++)
            {
                if(st2[i]==st2[j])
                    count++;
            }
        }
        s2=len-count;

        cout<<s1<<endl<<s2<<endl;
        sum=s1+s2;
        cout<<sum;
        puts(st1);
        puts(st2);
    //}


}
