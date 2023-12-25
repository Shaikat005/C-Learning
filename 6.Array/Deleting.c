#include<stdio.h>
int main()
{
    int index1,index2,n,i,j;
    printf("Enter the number of element in the array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array:\n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("Enter the index number of the elements to be deleted:\n");
    scanf("%d %d",&index1,&index2);
    if(index1<index2)
    {
        i=index2;
        j=index1;
    }

    else
    {
        i=index1;
        j=index2;
    }
     for(;i<n-1;i++)
        a[i]=a[i+1];
    for(;j<n-1;j++)
        a[j]=a[j+1];
    printf("After deleting %d and %d:\n",a[index1-1],a[index2-1]);
    for(i=0;i<n-2;i++)
        printf("%d ",a[i]);
}
