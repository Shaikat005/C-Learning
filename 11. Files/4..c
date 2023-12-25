//opening a file and taking input from user.
#include<stdio.h>
int main()
{
    int i;
    FILE *file;
    char name[25];
    file=fopen("4.txt","w");
    if(file==NULL)
        printf("The file does not exists.\n");
    else
    {
        printf("The file is opened.\n");
        gets(name);
        fputs(name,file);
        fclose(file);
    }
    printf("The file is written successfully.\n");

}

