#include<stdio.h>
int main()
{
    char st1[50 ]="My name is ";
    char st2[ ]="Shaikat Khan.";
     int i=0,len=0, j=0;

    while(st1[i] != '\0')
    {
        i++;
        len++;
    }

    while(st2[j] != '\0')
    {
        st1[len+j]=st2[j];
    }

    printf("st1= %s\n", st1);
}
