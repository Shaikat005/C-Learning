#include<stdio.h>
int main()
{
    char st1[ ]="donate",st2[20];
    int T,i,K;
    long long int sum=0;
    scanf("%d",&T);
    while(T--)
    {
        gets(st2);
        if(strcmp(st1,st2)==0)
        {
            scanf("%d",K);
            sum+=K;
        }
        else
        {
            printf("%lld\n",sum);
        }
    }

}
