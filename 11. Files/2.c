//Opening a file and writing something in the file.
#include<stdio.h>
int main()
{
    int i;
    FILE *file;
    char name[20]="Hasan Nawab";
    file=fopen("1.txt","w");
    if(file==NULL)
        printf("The file doesn't exists. ");
    else
    {
        printf("The file is opened.\n");
        for(i=0;name[i]!='\0';i++)
        {
            fputc(name[i],file);
        }
    }
    printf("The file is written successfully.\n");
}
