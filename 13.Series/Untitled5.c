//. Sum of 1*2*3+2*3*4+3*4*5+…..+N1*N2*N3.
#include<stdio.h>
int main()
{
    int n1,n2,n3,i=1,j=2,k=3,sum=0;
    printf("Enter the value of n1:");
    scanf("%d",&n1);
    n2=n1+1;
    n3=n2+1;
    printf("1.2.3+2.3.4+3.4.5+.....+%d.%d.%d=",n1,n2,n3);
    while((i<=n1)&&(j<=n2)&&(k<=n3))
    {
        sum=sum+i*j;
        i=i+1;
        j=j+1;
        k=k+1;
    }
    printf("%d",sum);
}
