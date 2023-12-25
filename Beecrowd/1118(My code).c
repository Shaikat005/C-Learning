
#include<stdio.h>
int main()
{
    float a,A[3],media;
    int i,j=0,X,k;
    for(i=0;i<500;i++)
    {
        while(j<2)
        {
        scanf("%f",&a);
        if(a>=0 && a<=10)
        {
            A[j]=a;
            j++;
        }
        else
        {
            printf("nota invalida\n");
        }
        }
        if(j>2)
        {
            break;
        }

    }
    media=(A[0]+A[1])/2.0;
    printf("media = %0.2f\n",media);
    j=0;

    for(;k;k++)
    {
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&X);
    if(X<1 || X>2)
    {
        scanf("%d",&X);
    }
    else if(X==1)
    {
        for(i=0;i<500;i++)
    {
        while(j<2)
        {
        scanf("%f",&a);
        if(a>=0 && a<=10)
        {
            A[j]=a;
            j++;
        }

        }
        if(j>2)
        {
            break;
        }

    }
    media=(A[0]+A[1])/2.0;
    printf("media = %0.2f\n",media);
    }
       else if (X==2)
        {
            break;
        }

    }


}
