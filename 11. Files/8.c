//Use of fscanf() function.
#include<stdio.h>
int main()
{
    FILE *file;
    char ch[20];
    int age;
    file=fopen("5.txt","r");
    if(file==NULL)
        printf("The file doesn't exists.\n");
    else
    {
        fscanf(file,"%s%d",ch,&age);
        printf("%s\n%d",ch,age);
        fclose(file);
    }
}
