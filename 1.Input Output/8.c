#include<stdio.h>
int main()
{
    float celsius, Farenheight;
    printf("Please enter the temperature in farenheight:");
    scanf("%f", &Farenheight);
    celsius=(Farenheight-32)*5/9;
    printf("Temperature in Celsius is: %.3f", celsius);
    return 0;
}
