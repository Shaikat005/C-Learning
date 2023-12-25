#include<stdio.h>
double triangle_area(double height,double base);
int main()
{
    double h,b,area;
    printf("Enter the value of hight and base:");
    scanf("%lf %lf", &h,&b);
    area=triangle_area(h,b);
    printf("Area is: %.lf", area);
}

double triangle_area(double hight,double base)
{

    return 0.5*hight*base;
}
