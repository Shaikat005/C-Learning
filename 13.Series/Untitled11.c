#include<stdio.h>
int main()
{
    int i,result=1,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("1x3x5x7x.....x%d= ",(2*n-1));
    for(i=1;i<=2*n-1;i=i+2)
    {
        result=result*i;
    }
    printf("%d",result);
}

