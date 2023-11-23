#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a value:");
    scanf("%c", &ch);
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' ||  ch=='o' || ch=='u')
    {
        printf("It is a vowel.");
    }
    else
    {
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
        {
            printf("It is a consonant.");
        }
        else
        {
            printf("It is a special character.");
        }
    }
}
