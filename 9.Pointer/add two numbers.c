#include<stdio.h>
int main()
{
    int x=10,y=10;
    int *p1,*p2;
    p1=&x,  p2=&y;
    printf("Sum = %d",*p1+*p2);
}
