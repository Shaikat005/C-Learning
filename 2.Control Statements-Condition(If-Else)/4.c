#include<stdio.h>
int main()
{
    int n1, n2;
    printf("Enter two different values:");
    scanf("%d\n %d", &n1, &n2);
    if(n1>n2)
    {
        printf("n1 is largest.");
    }
    else
    {
        printf("n2 is largest.");
    }
}

