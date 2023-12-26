#include<stdio.h>
int main()
{
    int num[50],position,value,size=5,i,n;

    printf("How many number= ");
    scanf("%d",&n);
    printf("Enter your Number= \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Enter the Position= ");
    scanf("%d",&position);

    for(i=position-1;i<=size-2;i++)
    {
        num[i]=num[i+1];
    }
    num[size-1]=0;

    for(i=0;i<size;i++)
    {
        printf("%d ",num[i]);
    }
}
