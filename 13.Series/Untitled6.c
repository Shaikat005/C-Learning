#include<stdio.h>
int main()
{
    int i=1,j=5,sum=0,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("1*5+2*5+3*5+.......+%d*5=",n);
    while(i<=n)
    {
        sum=sum+i*5;
        i++;
    }
    printf("%d",sum);
}
