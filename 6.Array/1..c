#include <stdio.h>
int main()
{
  int a[5],i,sum=0;
  printf("Enter values:\n");
  for(i=0;i<=4;i++)
  {
      scanf("%d", &a[i]);
  }

  for(i=0;i<=4;i++)
  {
      sum=sum+ a[i];

  }

printf("Sum is: %d\n", sum);
printf("Average is: %.2f", (float)sum/5);
}
