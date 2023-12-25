#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c,uppersum=0, lowersum=0;

    printf("Enter the number of row and column:\n");
    scanf("%d %d", &r,&c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d]=", i,j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

     printf("\n\na=");
    for(i=0;i<r;i++)
    {
        printf("\t");
        for(j=0;j<c;j++)
        {
            printf("%d ", a[i][j] );
        }
        printf("\n");
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i<j)
                uppersum=uppersum+a[i][j];

                else if(i>j)
                lowersum=lowersum+a[i][j];
        }
    }

    printf("Sum of upper triangle elements:%d", uppersum);
    printf("\nSum of lower triangle elements: %d", lowersum);
}
