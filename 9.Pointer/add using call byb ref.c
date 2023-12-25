#include<stdio.h>
void add(int *a,int *b)
{
    *a=*a+*b;
}
int main()
{
    int a=20,b=30;
    add(&a,&b);
    printf("Sum= %d\n",a);
}
