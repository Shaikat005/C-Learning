#include<stdio.h>
int main()
{
    int  a, b, c, d, perimeter;
    // a, b, c, d are alternatively the sides of the rectangle//
    scanf("%d %d %d %d", &a, &b, &c, &d);
    perimeter= a+b+c+d;
    printf("perimeter is: %d", perimeter);
    return 0;
}
