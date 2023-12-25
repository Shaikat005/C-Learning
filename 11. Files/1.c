//Opening a file.
#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("1.txt","w");
    if(file==NULL)
        printf("The file doesn't exists. ");
    else
        printf("The file is opened.");
}
