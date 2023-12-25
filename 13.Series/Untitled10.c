#include<stdio.h>
int main()
{
    long long  int i,result=1,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("2x4x6x8x......x%d= ",2*n);
    for(i=2;i<=2*n;i=i+2)
    {
        result=result*i;
    }
    printf("%d",result);
}

