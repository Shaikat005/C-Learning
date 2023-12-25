#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("sorting.txt","w");
    int a[50],i,j,n,temp;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    if(file==NULL)
        printf("The file does not exists.");
    else
    {
    printf("The file is created.");
    for(i=0;i<n;i++)
    {
        fprintf(file,"%d ",a[i]);
    }
    }
}
