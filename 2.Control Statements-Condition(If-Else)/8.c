#include<stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter the value of the sides: \n");
    scanf("%d\n %d\n %d", &side1,&side2,&side3);
    if(side1 == side2 && side2 == side3)
    {
        printf("The triangle is  equilateral.");
    }
    else if (side1 == side2 || side2== side3 || side3 == side1)
    {
        printf("The triangle is bilateral.");
    }
    else
    {
        printf("The triangle is a scalene.");
    }
}
