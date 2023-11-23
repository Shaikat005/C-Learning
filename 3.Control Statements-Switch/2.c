#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the value of ch:");
    scanf("%c",&ch);

    switch(ch)
    {
        int a,b,c;
    case '+':

        printf("Enter the value of a,b,c:");
        scanf("%d %d %d", &a,&b,&c);
        int sum=a+b+c;
        printf("sum=%d",sum);
        break;

    case '-':

        printf("Enter the value of a,b:");
        scanf("%d %d", &a,&b);
        int sub=a-b;
        printf("Substraction=%d",sub);
        break;

    case'*':

        printf("Enter the value of a,b:");
        scanf("%d %d", &a,&b);
        int mult=a*b;
        printf("Multiplication=%d",mult);
        break;

    case '/':

        printf("Enter the value of a,b:");
        scanf("%d %d", &a,&b);
        int div=a/b;
        printf("Div=%d",div);
        break;

    default:
        printf("Error!!!");
        break;
    }
}
