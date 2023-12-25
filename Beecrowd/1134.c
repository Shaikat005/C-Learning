#include<stdio.h>
int main()
{
    int X,a=0,g=0,d=0;
    while(1)
    {
    scanf("%d",&X);
    if(X==1)
    {
       a+=1;
    }
    else if(X==2)
    {
        g+=1;
    }
    else if(X==3)
    {
        d+=1;
    }
    else if(X==4)
    {
        break;
    }
    else if(X<1 || X>4)
    {
        continue;
    }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);
    return 0;
}
