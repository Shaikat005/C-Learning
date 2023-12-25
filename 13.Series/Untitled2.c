//Sum of 2+4+6+…..+2N.
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("The number of terms:");
    scanf("%d",&n);
    printf("2+4+6+.....+%d=",2*n);

    for(i=2;i<=2*n;i=i+2)
    {
        sum=sum+i;
    }
    printf("%d",sum);

    getch();
}





