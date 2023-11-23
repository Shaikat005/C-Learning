#include<stdio.h>
int main()
{
    double centimeter,meter;
    printf("Please enter the value in centimeter");
    scanf("%lf",  &centimeter);
    meter=centimeter/100;
    printf("Meter= %0.3lf", meter);
    return 0;
}
