#include<stdio.h>
int main()
{
    char a[100];
    int i,j,max,count=0,max_count=0;
    char max_char;
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        count=0;
        for(j=0;j<strlen(a);j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(max_count<count)
        {
            max_count=count;
            max_char=a[i];
        }
    }
    printf("%c is the highest appearing character and It appeared %d times.",max_char,max_count);
}
