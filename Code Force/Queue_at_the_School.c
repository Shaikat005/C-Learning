#include<stdio.h>
int main()
{
    int n,t,i,j;
    scanf("%d %d",&n,&t);
    char st[n],temp;
    scanf("%s",st);
    for(i=0;i<t;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(st[j]=='B' && st[j+1]=='G')
            {
                temp=st[j];
                st[j]=st[j+1];
                st[j+1]=temp;
                j++;
            }
        }
    }
    puts(st);
}
