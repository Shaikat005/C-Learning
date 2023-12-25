//Basic of Structure
#include<stdio.h>
union example
{
    char Name[20];
    int age;
    int salary;
}p1,p2;
int main()
{
    fflush(stdin);
    gets(p1.Name);
    scanf("%d",&p1.age);
    scanf("%d",&p1.salary);
    printf("\n");
    printf("%s\n",p1.Name);
    printf("%d\n",p1.age);
    printf("%d\n",p1.salary);
    printf("\n");
    fflush(stdin);
    gets(p2.Name);
    scanf("%d",&p2.age);
    scanf("%d",&p2.salary);
    printf("\n");
    printf("%s\n",p2.Name);
    printf("%d\n",p2.age);
    printf("%d\n",p2.salary);
}
