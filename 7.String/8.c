#include<stdio.h>
int main()
{
    char st[100];
    int i;
    gets(st);
    printf("The separated string is:  ");
    while(st[i]!='\0')
    {
        printf("%c  ",st[i]);
        i++;
    }
}
