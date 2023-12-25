#include<stdio.h>
int test(int *a,int *b)
{
    *a=10,*b=30;
    return *a+*b;
}
int main()
{
   int a,b;

   printf("Sum=%d", test(&a,&b));
}
