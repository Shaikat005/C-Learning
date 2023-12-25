
#include<stdio.h>
void update(int *a, int *b)
{
    int sub;
    if(*a>*b)
    {
        sub=*a-*b;
    }
    else
    {
        sub=*b-*a;
    }
    *a=sub;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    update(&a,&b);
    printf("%d",a);
}
