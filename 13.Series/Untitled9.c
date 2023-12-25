#include<stdio.h>
int main()
{
    int i,result=1,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("1x2x3x4x.....x%d= ",n);
    for(i=1;i<=n;i++)
    {
        result=result*i;
    }
    printf("%d",result);
}
