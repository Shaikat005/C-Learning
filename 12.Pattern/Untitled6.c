#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int len=((2*n)-1);
    printf("The pattern is:\n\n");
    for(i=0;i<=len-1;i++)
    {
        printf("%d ",n);
    }
    printf("\n");
    for(i=1;i<=len-2;i++)
    {
        for(j=1;j<=len;j++)
        {
           if(j>1 && j<len )
                    printf("%d ",n-1);
            else
                    printf("%d ",n);
        }
        printf("\n");
    }
    for(i=0;i<=len-1;i++)
    {
        printf("%d ",n);
    }
}
