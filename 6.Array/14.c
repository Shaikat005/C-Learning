#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c,sum=0;

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
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }

    printf("\n Sum of the diagonal elements:%d", sum);

}
