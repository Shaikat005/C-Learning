#include<stdio.h>
int main()
{
    int X,Y,i,temp,sum=0;
    scanf("%d\n%d",&X,&Y);
    if(X>Y)
    {
        temp=Y;
        Y=X;
        X=temp;
    }
    if(X%2==0)
    {
        X=X+1;
    }
    else
    {
        X=X+2;
    }
    for(i=X;i<Y;i=i+2)
    {
        sum=sum+i;
    }
    printf("%d\n",sum);
    return 0;
}

