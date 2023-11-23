#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the values of x,y,z:");
    scanf("%d %d %d", &x, &y, &z);

    switch(x>y)
    {
    case 1:
    {
        switch(x>z)
        {
        case 1:
            printf("x is largest.");
            break;
        case 0:
            printf("z is largest.");
            break;
        }
        break;
    }
    case 0:
    {
        switch(y>z)
        {
        case 1:
            printf("y is largest.");
            break;
        case 0:
            printf("z is largest.");
            break;
        }
        break;
    }

    }


}
