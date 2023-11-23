#include<stdio.h>
int main()
{
    int n,i,row;
    printf("Enter the number of rows:");
    scanf("%d", &row);
    for(n=1;n<=row;n++)
    {
        for(i=1;i<=n;i++)

            printf("*");
            printf("\n");

    }
}
