#include<stdio.h>
int main()
{
    char st1[7]="donate",st2[20],st3[]="report",st4[20];
    int T,K;
    int sum=0;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",st2);
        if(strcmp(st2,st1)==0)
        {
            scanf("%d",&K);
            sum+=K;
        }
        else if(strcmp(st2,st3)==0)
        {
            printf("%d\n",sum);
        }
    }

}

