#include<stdio.h>
int main()
{
    int n1,n2,i=1,j=2,sum=0;
    printf("Enter the value of n1:");
    scanf("%d",&n1);
    n2=n1+1;
    printf("1.2+2.3+3.4+.....+%d.%d=",n1,n2);
    while((i<=n1)&&(j<=n2))
    {
        sum=sum+i*j;
        i=i+1;
        j=j+1;
    }
    printf("%d",sum);
}
