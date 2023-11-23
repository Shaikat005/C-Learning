//C program to print n numbers.
#include<stdio.h>
int main()
{
    int k=1,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(k<=n)
    {
        printf("%d\n", k);
        k++;
    }
}
