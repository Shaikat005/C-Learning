#include<stdio.h>
int main()
{
    char a[100];
    int i,j,w=0;
    gets(a);
    j=strlen(a);
        for(i=0;i<=j;i++)
        {
            if(a[i]==' ' || a[i]=='\0' || a[i]=='\n' || a[i]=='\t')
            w+=1;
        }
        printf("%d",w);
}
