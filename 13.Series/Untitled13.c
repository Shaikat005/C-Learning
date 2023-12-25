#include<stdio.h>
int main()
{
    int i,n,result=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n%2==0)
    printf("1-2+3-4+......-%d=",n);
    else
        printf("1-2+3-4+......+%d=",n);

    for(i=5;i<=n;i=i+5)
    {
        if(i%2==0)
           {

            result=result-i;}
        else
           {

           result=result+i;}
              printf("%d  ",i);

    }
    printf("%d",result);
    getch();
}
