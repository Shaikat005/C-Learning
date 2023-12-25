#include<stdio.h>
int main()
{
    int X,Y,a,b,time;
    scanf("%d %d",&X,&Y);
      if(X==0 && Y==0)
    {
       time=24;
    }
    else if(X<=12 && Y<=12)
    {
        time=X+Y;
    }
    else if(X<=12 && Y>12)
    {
        b=24-Y;
        time=X+b;
    }
    else if(X>12 && Y<=12)
    {
        a=24-X;
        time=a+Y;
    }
    else if(X>12 && Y>12)
    {
        a=24-X;
        b=24-Y;
        time=a+b;
    }


    printf("O JOGO DUROU %d HORA(S)\n",time);
    return 0;

}
