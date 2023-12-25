//Take input of 5 persons name,age and salary and show them.
#include<stdio.h>
struct  library
{
    char Name[100];
    int age;
    int salary;
};
int main()
{
    struct library p[5];
    int i;
    for(i=0;i<5;i++)
    {
        fflush(stdin);
        gets(p[i].Name);
        scanf("%d",&p[i].age);
        scanf("%d",&p[i].salary);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("%s\n",p[i].Name);
        printf("%d\n",p[i].age);
        printf("%d\n",p[i].salary);
        printf("\n");
    }
}
