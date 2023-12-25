//Reading a file using fgetc() function.
#include<stdio.h>
int main()
{
    char ch;
    FILE *file;
    file=fopen("1.txt","r");
    if(file==NULL)
        printf("The file does not exists.\n");
    else
    {
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c",ch);
        }
    }
}
