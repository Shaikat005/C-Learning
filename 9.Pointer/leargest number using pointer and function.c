#include<stdio.h>
void minmax(int n,int a[100],int *min,int *max)
{
    int i;
    *min=a[0];
    *max=a[0];
    for(i=0;i<n;i++)\
    {
        if(a[i]<*min)
            *min=a[i];
        else if(a[i]>*max)
            *max=a[i];
    }
}
int main()
{
    int i,n,a[100],Max,Min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    minmax(n,a,&Min,&Max);
    printf("Max=%d  Min=%d",Max,Min);
}
