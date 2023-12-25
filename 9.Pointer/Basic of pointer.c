#include<stdio.h>
int main()
{
    int x = 5;
    int *ptr;
    ptr=&x;
    printf("Value of x=%d\n",x);
    printf("Address of x=%d\n",&x);
    printf("Address of x in hexadecimal:%x\n",&x);
    printf("Address of x=%d\n",ptr);
    printf("Value of x=%d\n",*ptr);
    printf("Address of *ptr variable=%d\n",&ptr);
}
