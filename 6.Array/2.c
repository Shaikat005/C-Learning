#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter the values:\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Values are:\n");
    for(i=0;i<=9;i++)
    {
        printf("%d\n", a[i]);
    }

}
