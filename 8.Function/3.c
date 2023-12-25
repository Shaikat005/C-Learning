#include<stdio.h>
int square(int num);
int main()
{
    int a;
    printf("Enter any integer number:");
    scanf("%d", &a);
    int result=square(a);
    printf("Square=%d",result);

}

int square(int num)

    {
            return num*num;
    }

