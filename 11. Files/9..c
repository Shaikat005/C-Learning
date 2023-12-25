//Create a text file with student information(Name,age,phone number.)
#include<stdio.h>
int main()
{
    int n,age,phone,i;
    char name[20],H[26];
    FILE *file;
    file=fopen("student.txt","w");
    if(file==NULL)
        printf("The file doesn't exists.");
    else
    {
        printf("The file is created.\n");
        gets(H);
        fputs(H,file);
        printf("\n");
        printf("Enter the number of students:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            printf("Enter the name of the student:");
            scanf("%s",name);
            printf("Enter age:");
            scanf("%d",&age);
            printf("Enter phone number:");
            scanf("%d",&phone);
            fprintf(file,"\n%s\t\t%d\t%d",name,age,phone);
            fclose(file);
        }
    }
}
