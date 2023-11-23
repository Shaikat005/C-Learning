
#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Even numbers are:");
    for(i=0; i<=n; i=i+2)
    {
        if(i%2==0)
        {
            printf("%d  ",i);
            count++;
        }
    }
    printf("\n\nThere are %d even numbers.\n\n",count);

    printf("Odd numbers are:");
    count=0;
    for(i=1; i<=n; i=i+2)
    {
        if(i%2 !=0)
        {
            printf("%d   ",i);
            count++;
        }
    }
    printf("\n\nThere are %d odd numbers.",count);
}
