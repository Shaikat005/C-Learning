#include<stdio.h>
int main()
{
   int a[50],*ptr[50],i,n;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       ptr[i]=&a[i];
       scanf("%d",*ptr[i]);
   }
   for(i=0;i<n;i++)
   {
       printf("%d",*ptr[i]);
   }
}
