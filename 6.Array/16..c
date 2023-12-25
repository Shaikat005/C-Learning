#include<stdio.h>
int main()
{
    int a[100],i,n,even=0,odd=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");

    printf("Even numbers are:\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d  ",a[i]);
            even++;
        }
    }
     printf("\n");
     printf("Odd  numbers are:\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d  ",a[i]);
            odd++;
        }
    }
    printf("\n\n");
    printf("There are %d even numbers.\n",even);
    printf("There are %d odd numbers.",odd);

    getch();


}
