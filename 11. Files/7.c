//Reading a file using fgets() function.
#include<stdio.h>
int main()
{
    FILE *file;
    char ch[40];
    file=fopen("student.txt","r");
    if(file==NULL)
        printf("The file doesn't exists.\n");
    else
    {
        while(!feof(file))
        {
        fgets(ch,40,file);
        printf("%s",ch);
        }
        fclose(file);
    }
}
