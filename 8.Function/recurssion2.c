//find the sum of the digits of a number.such as 746=17.

/*#include<stdio.h>
int main()
{
    int n,sum=0,r=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10+r;
       // sum+=r;
        n=n/10;
    }
    printf("Sum = %d\n",r);
}*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
}

int sum(N)
{
    if(N<10)
        return N;
    else
        return N%10 + sum(N/10);
}
