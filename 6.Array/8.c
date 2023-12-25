#include<stdio.h>
int main()
{
    int array[3][4]={  {1,2,3,4}, {5,8,9,7}, {4,8,9,6}  }, i, j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
