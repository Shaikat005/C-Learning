#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character or number or other symbols:");
    scanf("%c", &ch);
    if((ch >= 'a' && ch<='z') || (ch>= 'A' && ch<= 'Z'))
    {
        printf("It is a character.");
    }
    else if (ch>= '0' && ch<= '9')
    {
        printf("It is a number");
    }
    else
    {
        printf("It is special character.");
    }

}
