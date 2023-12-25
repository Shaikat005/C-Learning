#include<stdio.h>
int main()
{
    int num[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    printf("Enter the values:\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d", &num[i]);
    }
    printf("The reverse values are:\n");
    for(i=9;i>=0;i--)
    {
        printf("%d\n", num[i]);
    }

    return 0;
}
