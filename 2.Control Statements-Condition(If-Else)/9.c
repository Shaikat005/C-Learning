#include<stdio.h>
int main()
{
    int a, b, c;
    // Let a, b, c be respectively  the bodies of the triangle.
    printf("Please enter the three sides of the triangle:\n ");
    scanf("%d %d\n %d", &a, &b, &c);
    if((a+b>c) || (b+c)>a || (c+a)>b)
    {
        printf("The triangle is valid. ");
    }
    else
    {
        printf("The triangle is not valid.");
    }

}
