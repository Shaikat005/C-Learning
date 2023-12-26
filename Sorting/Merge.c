#include <stdio.h>
void merge_sort(int a[],int left,int right);
int main()
{
    int n,i;
    printf("Enter The size of array:");
    scanf("%d",&n);
    int a[n],left=0,right=n-1;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    merge_sort(a,left,right);

    for(i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }
}
void merge_sort(int a[],int left,int right)
{
    while(left<right)
    {
        int mid =(left+right)/2;

        merge_sort(a,left,mid);
        merge_sort(a,mid+1,right);
        merge(a,left,mid,right);
    }
}
void merge(int a[],int left,int mid,int right)
{
    int i,j,k;
    int size_left,size_right;
    size_left=mid-left+1;
    size_right= right-mid;
    int L[size_left], R[size_right];
    for(i=0; i<size_left; i++)
    {
        L[i]=a[left+i];
    }
    for(j=0; j<size_right; j++)
    {
        R[j]=a[mid+1+j];
    }
    i=0;
    j=0;
    k=left;
    while(i<size_left && j<size_right)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }


        k++;
    }
    while(i<size_left)
    {
        a[k]=L[i];
        i++;
        k++;
    }
    while(i<size_right)
    {
        a[k]=R[j];
        j++;
        k++;
    }
}

