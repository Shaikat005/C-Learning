#include <stdio.h>
void main()
{
   int i,j,rows,k=0;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   printf("%d ",k++);
	printf("\n");
   }
}
