#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i;
    printf("Enter a string:");
    gets(a);
    strcpy(b,a);
    printf("String b=%s",b);
}
