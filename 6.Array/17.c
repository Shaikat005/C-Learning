/*#include<stdio.h>
int main()
{
    int a[100],n,i,count=0,max_count=0,max,j;
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
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(max_count<count)
        {
            max_count=count;
            max=a[j];
        }
    }
    printf("%d appeared %d times.",max,max_count);
}*/

#include<stdio.h>
int main()
{
    int a[100],i,j,n,count=0,max_count=0,max;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nDuplicate elements are:\n");
    for(i=0; i<n; i++)
    {
        count=0;
        for(j=i+1; j<n+1; j++)
        {
            if(a[i]==a[j])
            {
                printf("%d\n",a[j]);
            }
        }
    }
}
