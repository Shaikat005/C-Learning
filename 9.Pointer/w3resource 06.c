#include<stdio.h>
int main()
{
    int a,b,*ptr1,*ptr2;
    scanf("%d %d",&a,&b);
    ptr1=&a;
    ptr2=&b;
    if(*ptr1>*ptr2)
        printf("%d is greater than %d.",*ptr1,*ptr2);
    else
        printf("%d is greater than %d.",*ptr2,*ptr1);
}
