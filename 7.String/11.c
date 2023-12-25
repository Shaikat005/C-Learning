#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,f=0;
    printf("Enter first string:");
    gets(a);
    printf("Enter second string:");
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
            f=1;
            break;
        }
    }
    if(f==1)
        printf("The strings are not same.");
    else
        printf("The strings are same.");
    return 0;
}
