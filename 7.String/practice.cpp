#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char st1[50],st2[50],st3[50];
    gets(st1);
    int i,j;
    int n=(sizeof(st1)/sizeof(0))-1;
    for(i=0;i<=n;i++)
        st3[i]=tolower(st1[i]);
    for(i=0,j=n;i<=n,j>=0;i++,j--)
    {

        st2[i]=st3[j];
    }
    printf("st3=%s\n",st3);
    printf("st2=%s\n",st2);
    if(strcmp(st3,st2)==0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
