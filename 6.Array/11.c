#include<stdio.h>
int main()
{
    int a[10][10],b[10][10], c[10][10], i, j, rows,columns;

    printf("Enter the number of rows and columns:\n");
    scanf("%d %d", &rows, &columns );
    //scaning a matrix:

    printf("Enter the elements of matrix a:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {

            printf("a[%d][%d] =", i,j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    //printing a matrix:

    printf("a=");
    for(i=0;i<rows;i++)
    {
        printf("\t");
        for(j=0;j<columns;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

      //scaning b matrix:

    printf("Enter the elements of matrix b:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {

            printf("b[%d][%d] =", i,j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    //printing b matrix:

    printf("b=");
    for(i=0;i<rows;i++)
    {
        printf("\t");
        for(j=0;j<columns;j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    //sum:

    printf("a+b=");

    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            c[i][j]= a[i][j] + b[i][j];
        }
    }

    printf("\n");

    for(i=0;i<rows;i++)
    {
        printf("\t");
        for(j=0;j<columns;j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}


