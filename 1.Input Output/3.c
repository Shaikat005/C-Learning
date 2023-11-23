#include<stdio.h>
int main()
{
    float a, b, div, mult, sub;
    scanf("%f %f", &a, &b);
    div= a/b;
    mult= a*b;
    sub= a-b;
    printf("div is: %f\n", div);
    printf("mult is: %f\n", mult);
    printf("sub is: %f\n", sub);
    return 0;
}
