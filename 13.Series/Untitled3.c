//using while loop for practice :)
//Sum of 1+3+5+…..+2N-1.
#include<stdio.h>
int main()
{
    int sum=0,i=1,n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("1+3+5+....+%d=",2*n-1);
    while(i<=2*n-1)
    {
        sum=sum+i;
        i=i+2;
    }
    printf("%d",sum);
}
