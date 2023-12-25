#include<stdio.h>
int main()
{
    char st[100];
    int i;
    printf("Enter a String: ");
    gets(st);
    for(i=strlen(st);i>=0;i--)
    {
        printf("%c  ",st[i]);
    }
}
