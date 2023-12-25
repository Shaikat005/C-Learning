//Apearning a file.
#include<stdio.h>
int main()
{
    int i;
    FILE *file;
    char name[25]="Shaikat";
    file=fopen("1.txt","a");
    if(file==NULL)
        printf("The file does not exists.\n");
    else
    {
        printf("The file is opened.\n");
        for(i=0;name[i]!=NULL;i++)
        {
            fputc(name[i],file);
        }
        fputs("\n",file);
    }
    printf("The file is written successfully.\n");

}
