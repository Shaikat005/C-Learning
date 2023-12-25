#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,len;
    char st[ 1000];
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        scanf("%s",st);
        len=strlen(st);
        if(len>3)
        {
            printf("3\n");
        }
        else if((st[0]=='o' && st[2]=='e') || (st[0]=='o' && st[1]=='n') || (st[1]=='n' && st[2]=='e'))
        {
            printf("1\n");
        }
        else if((st[0]=='t' && st[2]=='o') || (st[0]=='t' && st[1]=='w') ||(st[1]=='w' && st[2]=='o'))
        {
            printf("2\n");
        }
    }
    return 0;
}

