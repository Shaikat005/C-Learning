#include<stdio.h>
void fun(int *ptr1,int *ptr2)
{
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before swapping:\n");
    printf("a=%d   b=%d\n",a,b);
    fun(&a,&b);
    printf("After swapping:\n");
    printf("a=%d   b=%d\n",a,b);
}
