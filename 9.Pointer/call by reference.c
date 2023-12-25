#include<stdio.h>
//void fun(int,int);
int main()
{
    int a=20,b=30;
    fun(&a,&b);
    printf("a=%d ",a);
}
void fun(int *a,int *b)
{
  //  *a=30;
    //*b=20;
    *a=*a+*b;
}
