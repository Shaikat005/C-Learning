#include<stdio.h>
int fact(int);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fact(n));
}

int fact(int N)
{
    if(N==0)
        return 1;
    else
        return N*fact(N-1);
}
