#include<stdio.h>
int main()
{
    float sum=0,i,n;
    printf("Enter the last digit:");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);
    }
    printf("%f",sum);
}

