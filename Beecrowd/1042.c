#include<stdio.h>
int main()
{
    int a[3],i,j,temp,p,q,r;

    for(i=0; i<3; i++)
    {
        scanf("%d",&a[i]);
    }
    p=a[0];
    q=a[1];
    r=a[2];
    for(i=0; i<3; i++)
    {
        for(j=i+1; j<3; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0; i<3; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n");

    printf("%d\n%d\n%d\n",p,q,r);
    return 0;
}

