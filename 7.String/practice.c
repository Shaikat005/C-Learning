#include<stdio.h>
int main()
{
    char st[50],st1[50];
    int i=0,j,count=1;
    scanf("%s",st);
    while(st[i]!='\0')
    {
        i++;
    }
    int len=i;
    for(i=0,j=len-1; i<len,j>=0; i++,j--)
    {
        st1[i]=st[j];
    }

    if(strcmp(st,st1)==0)
        printf("Palindrome");
    else
        printf("Not palindrome");
}
