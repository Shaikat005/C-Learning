#include<stdio.h>
int main()
{
    int a[10][10], transpose[10][10], i, j, row, column;

    printf("Enter the value of row and column:\n");
    scanf("%d %d", &row, &column);

    //scanning matrix a:

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    //transpose matrix:

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            transpose[j][i]=a[i][j];
        }
    }

    //printing a matrix:

    printf("a=");
    for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<column;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    //printing transpose matrix:

    printf("\n\nTranspose of a=\n");
    for(i=0;i<column;i++)
    {

        for(j=0;j<row;j++)
        {
           printf("%d ", transpose[i][j]);
        }
            printf("\n");
    }
}
