#include<stdio.h>
int main()
{
   int n,i,row,k=1;
   printf("Input n:");
   scanf("%d", &row);
   for(n=1;n<=row;n++)
   {
       for(i=1;i<=n;i++)
        printf("%d", k++);
        printf("\n");
   }



}
