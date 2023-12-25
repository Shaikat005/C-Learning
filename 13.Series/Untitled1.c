//Sum of 1+2+3+……+N.
#include<stdio.h>
int main()
{
    int sum=0,i,n;
    printf("Enter the last digit:");
    scanf("%d",&n);
    printf("1+2+3+.....+%d=",n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}
