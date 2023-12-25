//reverse a number using recursion.
/*#include<stdio.h>
int main()
{
    int n,r,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=(n%10);
        sum=sum*10+r;
        n=n/10;
    }
    printf("%d",sum);
}*/


#include<stdio.h>
#include<math.h>
int sum=0;
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",rev(n));
}

int rev(int N)
{
    if(N)
        return ((N%10)*pow(10,(int)log10(N)))+rev(N/10);
    else
        return 0 ;
}
