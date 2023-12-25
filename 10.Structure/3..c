//C Program to Add Two Distances (in inch-feet system) using Structures
#include<stdio.h>
struct add
{
    int feet;
    float inch;
}p1,p2,result;
int main()
{
    printf("Enter length 1:\n");
    scanf("%d",&p1.feet);
    scanf("%f",&p1.inch);
    printf("Enter length 2:\n");
    scanf("%d",&p2.feet);
    scanf("%f",&p2.inch);
    //adding
    result.feet=p1.feet+p2.feet;
    result.inch=p1.inch+p2.inch;
    //convert inch if result>12 inch.
    if(result.inch>=12.0)
    {
        result.inch-=12.0;
        result.feet+=result.inch;
    }

    printf("%d feet %0.2f inch",result.feet,result.inch);
}
