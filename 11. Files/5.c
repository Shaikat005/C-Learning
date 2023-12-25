//Take input of someone's name and age in a file.
#include<stdio.h>
int main()
{
    FILE *file;
    char name[30];
    int age;
    file=fopen("5.txt","w");
    if(file==NULL)
        printf("The file does not exists.\n");
    else
    {
        printf("The file is opened.\n");
        printf("Enter your name:");
        gets(name);
        printf("Enter your age:");
        scanf("%d",&age);
        fprintf(file,"%s\n%d\n",name,age);
        fclose(file);
    }
    printf("The file is written successfully.\n");
    getch();
}
