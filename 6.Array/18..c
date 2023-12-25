#include<stdio.h>
int main()
{
    int a[100],i,j,n,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    count++;
                }
            }
        }
        if(count==0)
        {
            printf("%d  ",a[i]);
        }
    }
}
