#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=0; i<n-1; i++)
        printf("%d  ",fibonacci(i));
   // sum=sum+fibonacci(i);
    //printf("%d",sum);
}

int fibonacci(int N)
{
    if(N==0)
        return 0;
    if (N==1)
        return 1;
    else
        return ( fibonacci(N-1)+fibonacci(N-2));
}
