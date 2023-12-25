//C program to demonstrate example of Nested Structure.
#include<stdio.h>
struct student
{
    char Name[100];
    int ID;
    struct dob
    {
        int dd;
        int mm;
        int yy;
    }DOB;
}std;
int main()
{
    printf("Enter name and ID:\n");
    scanf("%s",std.Name);
    scanf("%d",&std.ID);
    scanf("%d %d %d",&std.DOB.dd,&std.DOB.mm,&std.DOB.yy);

    printf("\n%s\n",std.Name);
    printf("%d\n",std.ID);
    printf("%d/%d/%d",std.DOB.dd,std.DOB.mm,std.DOB.yy);
}
