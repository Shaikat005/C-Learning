#include<stdio.h>
int main()
{
    char a[100];
    int i=0,A=0,D=0,S=0;
    printf("Enter a string:");
    gets(a);
    while(a[i]!='\0')
    {
        if((a[i]>='a' && a[i]<= 'z') || (a[i]>='A' && a[i]<='Z'))
        {
            A++;
        }
        else if(a[i]>='0' && a[i]<='9')
        {
            D++;
        }
        else
        {
            S++;
        }
        i++;
    }
    printf("%d Alphabets.\n%d Digits.\n%d Special characters.\n",A,D,S);
}
