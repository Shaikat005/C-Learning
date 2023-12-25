
#include<stdio.h>
int main()
{
    int N,a[10000],i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
                  if(a[i]>0)
        {
           if(a[i]%2!=0)
           {
               printf("ODD POSITIVE\n");
           }
           if(a[i]%2==0)
           {
               printf("EVEN POSITIVE.\n");
           }
       }
        else if(a[i]==0)
        {
            printf("NULL\n");
        }
        else if(a[i]<0)
        {
            if(a[i]%2!=0)
           {
               printf("ODD NEGATIVE\n");
           }
           if(a[i]%2==0)
           {
               printf("EVEN NEGATIVE.\n");
           }
        }
    }
        return 0;
}
