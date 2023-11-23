#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if((n%11==0) && (n%9 == 0))
    {
        printf("The number is divisible by both 11 and 9");
    }
    else
    {
        printf("The number is not divisible by both 11 and 9");
    }

}
