#include<stdio.h>
int main()
{
    int a,b,*ptr1,*ptr2,temp;
    scanf("%d %d",&a,&b);
    ptr1=&a;
    ptr2=&b;
    printf("Actual value:\n");
    printf("a=%d   b=%d\n",a,b);
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("After swapping:\n");
    printf("a=%d   b=%d",a,b);
}
