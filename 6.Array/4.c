#include<stdio.h>
int main()
{
    int num[100],n,i;
    printf("Enter the number of values:");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &num[i]);
    }
    int max=num[0];
    for(i=1;i<n;i++)
    {
        if(max< num[i])
        {
            max=num[i];
        }
    }
    printf("Maximum value is: %d", max);
}
