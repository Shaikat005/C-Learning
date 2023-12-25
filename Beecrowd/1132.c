#include<stdio.h>
int main()
{
    int X,Y,sum=0,i,temp;
    scanf("%d %d",&X,&Y);
    if(X>Y)
    {
        temp=X;
        X=Y;
        Y=temp;
    }
    if(X%5==2 || X%5==3)
    {
        X+=1;
    }
    for(i=X;i<Y;i++)
    {
        if(i%5==2 || i%5==3)
        {
               printf("%d\n",i);
        }
    }

    return 0;
}
