#include<stdio.h>
int main()
{
    double base, height, area;
    printf("Please enter the value of base:");
    scanf("%lf", &base);
    printf("Please enter the value of height:");
    scanf("%lf", &height);
    area= 0.5*base*height;
    printf("Area is: %0.2lf", area);
    return 0;
}
