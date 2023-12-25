//Square:

#include<stdio.h>
int main()
{
        int row,i,j;
        printf("Enter the value of row:");
        scanf("%d",&row);

        for(i=1;i<=row;i++)
        {
            for(j=0;j<=row;j++)
            {
                printf("*");
            }
            printf("\n");
        }
}
