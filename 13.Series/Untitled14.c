//Print fibonaci series.
#include<stdio.h>
int main()
{
    int n,first=0,secound=1,fibo,count;
    printf("Enter the value of n;");
    scanf("%d",&n);
    for(count=0;count<n;count++)
    {
        if(count<=1)
            fibo=count;
        else
         {
             fibo=first+secound;
            first=secound;
            secound=fibo;
         }
            printf("%d    ",fibo);
    }
}

/*Easy technique
#include<stdio.h>
int main()
{
    int n,i,a[100];
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<n;i++)
    {
        printf("%d   ",a[i]);
    }
}*/


