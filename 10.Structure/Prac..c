
#include<stdio.h>
int main()
{
    int n,i,j,a[3],count=0,num=0,value=1;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        count=0;
        for(j=0; j<3; j++)
        {
            scanf("%d ",&a[j]);
            if(a[j]==value)
                count++;
        }
        if(count>=2)
            num++;
    }
    printf("%d",num);
}
