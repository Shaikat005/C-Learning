#include<stdio.h>
int main()
{
    int a1[100],a2[100],n,i;

    printf("How many elements:");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }

  printf("The elements of a1:\n");

    for(i=0;i<n;i++)
    {
        printf(" %d ", a1[i]);
    }

    for(i=0;i<n;i++)
    {
        a2[i]=a1[i];
    }
    printf("\n");

    printf("The elements of a2:\n");
    for(i=0;i<n;i++){
        printf(" %d ", a2[i]);}
}
