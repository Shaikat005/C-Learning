#include<stdio.h>
int main()
{
  int a[]={10,20,30,40,50},i,c=0,n;
  printf("Enter the value=");
   scanf("%d",n);
  for(i=0;i<5;i++)
  {
      scanf("%d",a[i]);
      if(a[i]==n)
      {
          c++;

          break;
      }

  }
  if(c==1)
  {
      printf("Match");
  }else
  {
      printf("DONT MATCH");
  }
  return 0;

}
