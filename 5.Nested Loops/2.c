#include<stdio.h>
int main()
{
    int n,i,rows;
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    for(n=1;n<=rows;n++)
    {
        for(i=1;i<=n;i++)
            printf("%d", i);
        printf("\n");
    }
}

