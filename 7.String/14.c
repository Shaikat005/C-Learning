#include<stdio.h>
int main()
{
    char a[100];
    int i=0,A=0,C=0;
    gets(a);
    while(a[i]!='\0')
    {
        if((a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i] =='o' || a[i]=='u') || (a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i] =='O' || a[i]=='U'))
            A++;
        else
        {
            C++;
        }

            i++;
    }
    printf("%d Vowels and %d Consonants.",A,C);
}
