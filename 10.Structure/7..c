/*C program to declare, initialize a UNION,
example of UNION*/
#include<stdio.h>
union test
{
    int ch;
    int a;
    int b;
}p;
int main()
{
    scanf("%c",&p.ch);
    scanf("%d",&p.a);
    scanf("%d",&p.b);
    printf("\n%c\n",p.ch);
    printf("%d\n",p.a);
    printf("%d\n",p.b);
}
